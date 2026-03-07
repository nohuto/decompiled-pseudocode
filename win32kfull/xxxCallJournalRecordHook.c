__int16 __fastcall xxxCallJournalRecordHook(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // eax
  struct tagHOOK *GlobalValid; // rax
  int v8; // ecx
  __int16 result; // ax
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+60h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&v10[1] = 0LL;
  v12 = 0;
  v10[0] = v1;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 16);
  v10[3] = v3;
  if ( HMValidateHandleNoSecure(v4, 1) )
    v11 = *(_QWORD *)(a1 + 16);
  else
    v11 = 0LL;
  if ( (unsigned int)(v10[0] - 512) > 0xE )
  {
    if ( (unsigned int)(v10[0] - 256) <= 9 )
    {
      v5 = *(unsigned __int8 *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || (_BYTE)v5 )
        v10[1] = *(unsigned __int8 *)(a1 + 32) | (v5 << 8);
      else
        v10[1] = (*(unsigned __int16 *)(gptiCurrent + 882LL) << 16) | 0xE7;
      v6 = *(_DWORD *)(a1 + 40);
      v10[2] = v5;
      if ( (v6 & 0x1000000) != 0 )
        v10[2] = v5 | 0x8000;
    }
  }
  else
  {
    *(_QWORD *)&v10[1] = *(_QWORD *)(a1 + 52);
  }
  GlobalValid = (struct tagHOOK *)PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, (__int64)v10, &v12, 0);
  v8 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v8 - 512) > 0xE )
  {
    result = v8 - 256;
    if ( (unsigned int)(v8 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = v10[1];
      result = BYTE1(v10[1]);
      *(_BYTE *)(a1 + 42) = BYTE1(v10[1]);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = v10[1];
    result = v10[2];
    *(_DWORD *)(a1 + 56) = v10[2];
  }
  return result;
}
