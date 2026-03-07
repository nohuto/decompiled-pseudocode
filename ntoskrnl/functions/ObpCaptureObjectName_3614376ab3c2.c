__int64 __fastcall ObpCaptureObjectName(char a1, unsigned __int64 a2, __int64 a3, int a4)
{
  const void *v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // di
  size_t v9; // r14
  unsigned int v10; // r15d
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY Pool2; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  unsigned int v16; // [rsp+24h] [rbp-64h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-5Ch]
  int Src; // [rsp+48h] [rbp-40h]
  const void *Src_8; // [rsp+50h] [rbp-38h]

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v16 = 0;
  if ( a1 && KeGetCurrentThread()->PreviousMode )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    Src = *(_DWORD *)a2;
    v5 = *(const void **)(a2 + 8);
    Src_8 = v5;
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      if ( ((unsigned __int8)v5 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (unsigned __int64)v5 + (unsigned __int16)*(_DWORD *)a2;
      if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v7 = Src;
  }
  else
  {
    v5 = *(const void **)(a2 + 8);
    Src_8 = v5;
    v7 = *(_WORD *)a2;
  }
  if ( v7 )
  {
    v8 = v7;
    v17 = v7;
    if ( (v7 & 1) != 0 || v7 == 65534 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      if ( (unsigned int)v7 + 2 < v7 )
        return (unsigned int)-1073741670;
      v9 = v7;
      v10 = v7 + 2;
      if ( a4 && v10 <= 0xF8 )
      {
        LOWORD(v10) = 248;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[5].P;
        ++P->TotalAllocates;
        Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
        if ( !Pool2 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[5].L;
          ++L->TotalAllocates;
          Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( !Pool2 )
          {
            ++L->AllocateMisses;
            Pool2 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                    (unsigned int)L->Type,
                                    L->Size,
                                    L->Tag);
          }
        }
        if ( Pool2 )
          LODWORD(Pool2->Next) = CurrentPrcb->Number;
        v5 = Src_8;
        v8 = v17;
      }
      else
      {
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(256LL, v10, 1833853519LL);
      }
      *(_WORD *)a3 = v8;
      *(_WORD *)(a3 + 2) = v10;
      *(_QWORD *)(a3 + 8) = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v5, v9);
        *((_WORD *)&Pool2->Next + (v9 >> 1)) = 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v16;
}
