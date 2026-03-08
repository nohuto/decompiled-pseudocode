/*
 * XREFs of PpmUpdateIdleVeto @ 0x140583F90
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140584430 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140597458 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 Pool2; // rdi
  int v17; // eax
  __int64 InterruptTimePrecise; // rax
  __int64 v19; // rcx
  __int64 *v20; // rax
  LARGE_INTEGER v22; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (_QWORD *)(a3 + 8);
  v10 = *(_DWORD **)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != (_DWORD *)v9 )
    {
      if ( v10[4] == a2 )
      {
        v17 = v10[5];
        if ( v17 == -1 )
          return (unsigned int)-1073741675;
        else
          v10[5] = v17 + 1;
        return v4;
      }
      v10 = *(_DWORD **)v10;
    }
    if ( v8 )
    {
      if ( a2 > *(_DWORD *)(a3 + 28) )
        return (unsigned int)-1073741811;
      Pool2 = v8 + ((unsigned __int64)(a2 - 1) << 6);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
      *(_QWORD *)(Pool2 + 32) = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        *(_QWORD *)(Pool2 + 48) = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v19) = 1;
        PopUpdateNonAttributedCpuTimeReference(v19);
      }
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 64LL, 1766674512LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    *(_DWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 20) = 1;
    if ( (_QWORD *)*v9 == v9 )
    {
      _InterlockedOr((volatile signed __int32 *)a3, 1u);
      *a4 = 1;
    }
    v20 = (__int64 *)v9[1];
    if ( (_QWORD *)*v20 == v9 )
    {
      *(_QWORD *)Pool2 = v9;
      *(_QWORD *)(Pool2 + 8) = v20;
      *v20 = Pool2;
      v9[1] = Pool2;
      return v4;
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    if ( v10 == (_DWORD *)v9 )
      return (unsigned int)-1073741811;
    if ( v10[4] == a2 )
      break;
    v10 = *(_DWORD **)v10;
  }
  if ( v10[5]-- == 1 )
  {
    v12 = *(_QWORD *)v10;
    if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      v13 = (_QWORD *)*((_QWORD *)v10 + 1);
      if ( (_DWORD *)*v13 == v10 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( v8 )
        {
          *(_OWORD *)v10 = 0LL;
          v14 = RtlGetInterruptTimePrecise(&v22);
          *((_QWORD *)v10 + 5) += v14 - *((_QWORD *)v10 + 4);
          v15 = *((_QWORD *)v10 + 6);
          *((_QWORD *)v10 + 4) = 0LL;
          if ( v15 )
          {
            *((_QWORD *)v10 + 6) = 0LL;
            *((_QWORD *)v10 + 7) += v14 - v15;
          }
          if ( *(_BYTE *)(a3 + 25) )
            PopUpdateNonAttributedCpuTimeReference(0LL);
        }
        else
        {
          ExFreePoolWithTag(v10, 0x694D5050u);
        }
        if ( (_QWORD *)*v9 == v9 )
        {
          _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
          *a4 = 1;
        }
        return v4;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  return v4;
}
