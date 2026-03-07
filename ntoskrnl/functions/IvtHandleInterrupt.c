char __fastcall IvtHandleInterrupt(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r8
  int v3; // ebx
  unsigned int v4; // r15d
  unsigned int v5; // ecx
  __int64 v6; // rsi
  int v7; // eax
  _QWORD *v8; // r14
  __int64 v9; // r12
  __int64 v10; // rbx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-10h]
  char v17; // [rsp+A0h] [rbp+48h]
  unsigned int v18; // [rsp+A8h] [rbp+50h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v14 = 0LL;
  BugCheckParameter2a = 0LL;
  v17 = 0;
  if ( *(_BYTE *)(BugCheckParameter2 + 316) && (*(_DWORD *)(v1 + 220) & 1) != 0 )
  {
    v17 = 1;
    *(_DWORD *)(v1 + 220) = 1;
    _InterlockedOr(v12, 0);
  }
  v3 = *(_DWORD *)(v1 + 52);
  if ( *(_BYTE *)(BugCheckParameter2 + 320) && (v3 & 0x71) != 0 )
    KeBugCheckEx(
      0x5Cu,
      0x502uLL,
      BugCheckParameter2,
      *(unsigned int *)(v1 + 52),
      *(_QWORD *)(v1
                + 16
                * (((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL)
                 + BYTE1(v3) % ((unsigned int)*(unsigned __int8 *)(BugCheckParameter2 + 221) + 1))));
  if ( (v3 & 2) != 0 && v3 != -1 )
  {
    v4 = 0;
    v5 = *(unsigned __int8 *)(BugCheckParameter2 + 221) + 1;
    v6 = v1 + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL);
    v7 = BYTE1(v3);
    v18 = v5;
    if ( v5 )
    {
      do
      {
        v8 = (_QWORD *)(v6 + 16LL * ((v4 + v7) % v5));
        v9 = v8[1];
        if ( v9 >= 0 )
          break;
        BugCheckParameter3 = *v8 >> 12;
        v15 = (unsigned __int16)v9;
        if ( (unsigned int)Feature_Servicing_IommuRTEFault__private_IsEnabledDeviceUsage() )
        {
          if ( (unsigned int)BYTE4(v9) - 32 > 8 || *(_BYTE *)(BugCheckParameter2 + 320) && BYTE4(v9) != 37 )
          {
LABEL_13:
            BugCheckParameter2a = 0LL;
            if ( (int)HalpIommuGetNextTranslatedDevice() >= 0 )
            {
              v10 = v15;
              while ( BugCheckParameter2a
                   && (!v14
                    || *(_DWORD *)v14 != 1
                    || *(unsigned __int16 *)(v14 + 12) != v10
                    || *(unsigned __int16 *)(v14 + 8) != *(_DWORD *)(BugCheckParameter2 + 252))
                   && (int)HalpIommuGetNextTranslatedDevice() >= 0 )
                ;
              HalpIommuGetNextTranslatedDevice();
            }
            KeBugCheckEx(0xE6u, 0x26uLL, BugCheckParameter2a, BugCheckParameter3, BYTE4(v9));
          }
        }
        else if ( *(_BYTE *)(BugCheckParameter2 + 320) || (unsigned int)BYTE4(v9) - 32 > 8 )
        {
          goto LABEL_13;
        }
        v8[1] = v9;
        _InterlockedOr(v12, 0);
        v5 = v18;
        ++v4;
        v7 = BYTE1(v3);
      }
      while ( v4 < v18 );
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 52LL) = v3 | 1;
    _InterlockedOr(v12, 0);
  }
  return v17;
}
