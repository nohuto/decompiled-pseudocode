__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 BaseData; // rdi
  __int64 v6; // r10
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  BaseData = GetBaseData(a2);
  v7 = *(_WORD *)(BaseData + 2);
  if ( v7 == 5 )
  {
    v3 = PushFrame(v6, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v10);
    if ( !v3 )
    {
      v8 = v10;
      *(_QWORD *)(v10 + 32) = BaseData;
      *(_DWORD *)(v8 + 16) = 0x10000;
      *(_QWORD *)(v8 + 40) = a3;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(v6, BaseData, *(_QWORD *)(BaseData + 32) + 12LL, a3);
  }
  else
  {
    CopyObjData(a3, BaseData);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v3;
}
