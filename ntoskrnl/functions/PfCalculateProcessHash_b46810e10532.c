__int64 __fastcall PfCalculateProcessHash(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // r14d
  int AllocatedFullProcessImageName; // eax
  PUNICODE_STRING v6; // rbx
  int v7; // esi
  __int64 Length; // r8
  __int64 v9; // rcx
  unsigned __int8 *Buffer; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  PUNICODE_STRING DestinationString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  DestinationString = 0LL;
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    v2 = (_QWORD *)a2;
  if ( !*(_QWORD *)(a1 + 1304) )
  {
    v7 = -1073741275;
    return v7 & (unsigned int)-(v2 != 0LL);
  }
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName(a1, &DestinationString);
  v6 = DestinationString;
  v7 = AllocatedFullProcessImageName;
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( DestinationString->Length )
    {
      RtlUpcaseUnicodeString(DestinationString, DestinationString, 0);
      if ( *(_DWORD *)(a1 + 1524) )
      {
LABEL_18:
        if ( v4 )
          PfpLogApplicationEvent(a1, v6, 0);
        if ( v2 )
        {
          *v2 = v6;
          v6 = 0LL;
        }
        v7 = 0;
        goto LABEL_23;
      }
      Length = v6->Length;
      v9 = 314159LL;
      Buffer = (unsigned __int8 *)v6->Buffer;
      if ( (unsigned __int64)Length >= 8 )
      {
        v11 = (unsigned __int64)v6->Length >> 3;
        Length = v6->Length - 8 * v11;
        do
        {
          v12 = Buffer[7];
          v13 = 37
              * (Buffer[6]
               + 37
               * (Buffer[5]
                + 37 * (Buffer[4] + 37 * (Buffer[3] + 37 * (Buffer[2] + 37 * (Buffer[1] + 37 * (*Buffer + 37 * v9)))))));
          Buffer += 8;
          v9 = v12 + v13;
          --v11;
        }
        while ( v11 );
      }
      if ( Length >= 1 && Length <= 7 )
      {
        v15 = Length - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                      goto LABEL_15;
                    LODWORD(v9) = *Buffer++ + 37 * v9;
                  }
                  LODWORD(v9) = *Buffer++ + 37 * v9;
                }
                LODWORD(v9) = *Buffer++ + 37 * v9;
              }
              LODWORD(v9) = *Buffer++ + 37 * v9;
            }
            LODWORD(v9) = *Buffer++ + 37 * v9;
          }
          LODWORD(v9) = *Buffer++ + 37 * v9;
        }
        LODWORD(v9) = *Buffer + 37 * v9;
      }
LABEL_15:
      if ( (unsigned int)v9 <= 1 )
        LODWORD(v9) = 1;
      *(_DWORD *)(a1 + 1524) = v9;
      goto LABEL_18;
    }
    v7 = -1073741198;
  }
LABEL_23:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7 & (unsigned int)-(v2 != 0LL);
}
