void CarTipLogDriverLoad()
{
  __int64 i; // rbx
  int v1; // [rsp+30h] [rbp-49h] BYREF
  __int64 v2; // [rsp+38h] [rbp-41h] BYREF
  __int64 v3; // [rsp+40h] [rbp-39h] BYREF
  __int64 v4; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-29h] BYREF
  int *v6; // [rsp+70h] [rbp-9h]
  int v7; // [rsp+78h] [rbp-1h]
  int v8; // [rsp+7Ch] [rbp+3h]
  _BYTE v9[16]; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+90h] [rbp+17h]
  int v11; // [rsp+98h] [rbp+1Fh]
  int v12; // [rsp+9Ch] [rbp+23h]
  __int64 *v13; // [rsp+A0h] [rbp+27h]
  int v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+ACh] [rbp+33h]
  __int64 *v16; // [rsp+B0h] [rbp+37h]
  int v17; // [rsp+B8h] [rbp+3Fh]
  int v18; // [rsp+BCh] [rbp+43h]

  if ( (VfRuleClasses & 0x400000) != 0 )
  {
    for ( i = CarDriverInfo; i; i = *(_QWORD *)i )
    {
      if ( (unsigned int)dword_140C09378 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C09378, 0x800000000000LL) )
        {
          v8 = 0;
          v1 = CarTipTag;
          v6 = &v1;
          v7 = 4;
          tlgCreate1Sz_wchar_t((__int64)v9, (const size_t *)(i + 8));
          v12 = 0;
          v15 = 0;
          v18 = 0;
          v10 = &v2;
          v3 = *(unsigned int *)(i + 84);
          v13 = &v3;
          v4 = *(unsigned int *)(i + 88);
          v16 = &v4;
          v2 = CarEtwRandomSeed;
          v11 = 8;
          v14 = 8;
          v17 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C09378,
            (unsigned __int8 *)&word_14003427E,
            0LL,
            0LL,
            7u,
            &v5);
        }
      }
    }
  }
}
