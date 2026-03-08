/*
 * XREFs of PfpPrefetchRequest @ 0x140765AC0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PfPrefetchRequestVerify @ 0x140765CC0 (PfPrefetchRequestVerify.c)
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  __int64 Pool2; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  _DWORD *v11; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  _DWORD *v14; // r14
  int v16; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h]

  Pool2 = 0LL;
  v16 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 < 0x80 )
    {
      v9 = -1073741306;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, v5, 1364354640LL);
      P = (PVOID)Pool2;
      if ( Pool2 )
      {
        if ( a2 )
        {
          v6 = *(unsigned int *)(a1 + 24);
          if ( (_DWORD)v6 )
          {
            v7 = *(_QWORD *)(a1 + 16);
            if ( (v7 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        if ( (unsigned int)PfPrefetchRequestVerify(Pool2, *(unsigned int *)(a1 + 24)) )
        {
          v9 = -1073741701;
        }
        else
        {
          v8 = *(void **)(Pool2 + 72);
          if ( v8 )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(v8, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *(_QWORD *)(Pool2 + 72) = Object;
            if ( v9 < 0 )
              goto LABEL_20;
            v16 = 1;
          }
          v9 = PfpPrefetchRequestPerform(Pool2);
          v10 = *(unsigned int *)(Pool2 + 40);
          v11 = (_DWORD *)(v10 + Pool2);
          v12 = v10 + Pool2 + 48LL * *(unsigned int *)(Pool2 + 12);
          v13 = *(_QWORD *)(a1 + 16);
          v14 = (_DWORD *)(v10 + v13);
          if ( a2 )
            ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v11 < v12 )
          {
            *v14 ^= (*v14 ^ *v11) & 8;
            v11 += 12;
            v14 += 12;
          }
          *(_OWORD *)(v13 + 84) = *(_OWORD *)(Pool2 + 84);
          *(_OWORD *)(v13 + 100) = *(_OWORD *)(Pool2 + 100);
          *(_QWORD *)(v13 + 116) = *(_QWORD *)(Pool2 + 116);
          *(_DWORD *)(v13 + 124) = *(_DWORD *)(Pool2 + 124);
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  else
  {
    v9 = -1073741821;
  }
LABEL_20:
  if ( v16 )
    ObfDereferenceObject(*(PVOID *)(Pool2 + 72));
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v9;
}
