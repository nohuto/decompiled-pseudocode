__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned int a5)
{
  char v8; // r15
  ULONG_PTR v9; // rcx
  __int64 CellFlat; // rax
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // eax
  char ValueData; // al
  void *v17; // rdi
  SIZE_T v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  void *Source1; // [rsp+58h] [rbp-8h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  LOBYTE(v26) = 0;
  Source1 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v8 = 0;
  if ( (int)CmpFindNameInListWithStatus(
              *(_QWORD *)(a1 + 32),
              (_DWORD *)(a1 + 96),
              a2,
              0,
              0LL,
              (__int64)&BugCheckParameter4) < 0 )
    return 2;
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v9, (unsigned int)BugCheckParameter4);
  else
    CellFlat = HvpGetCellPaged(v9);
  v11 = 2;
  v12 = CellFlat;
  if ( (*(_BYTE *)(CellFlat + 16) & 2) == 0 && a3 == *(_DWORD *)(CellFlat + 12) )
  {
    v13 = *(_DWORD *)(CellFlat + 4);
    v14 = a5;
    if ( a5 == (v13 & 0x7FFFFFFF) )
    {
      if ( a5 )
      {
        v15 = v13 + 0x80000000;
        if ( v13 < 0x80000000 )
          v15 = v13;
        LODWORD(BugCheckParameter4) = v15;
        if ( v13 >= 0x80000000 )
        {
          v17 = (void *)(v12 + 8);
        }
        else
        {
          v8 = 1;
          ValueData = CmpGetValueData(*(_QWORD *)(a1 + 32), (__int64)&Source1, (__int64)&v26, (__int64)&v24);
          v17 = Source1;
          if ( !ValueData )
          {
LABEL_13:
            if ( v17 && v8 )
            {
              if ( (_BYTE)v26 == 1 )
              {
                ExFreePoolWithTag(v17, 0);
              }
              else
              {
                v19 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v19, &v24);
                else
                  HvpReleaseCellPaged(v19, &v24);
              }
            }
            goto LABEL_18;
          }
        }
        v18 = v14;
        LODWORD(v18) = v14 & 0x7FFFFFFF;
        v11 = v14 != (unsigned int)RtlCompareMemory(v17, a4, v18) ? 2 : 0;
        goto LABEL_13;
      }
      v11 = 0;
    }
  }
LABEL_18:
  v20 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v20, &v23);
  else
    HvpReleaseCellPaged(v20, &v23);
  return v11;
}
