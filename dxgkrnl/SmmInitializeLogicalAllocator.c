__int64 __fastcall SmmInitializeLogicalAllocator(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // edx
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 result; // rax
  int v10; // edx

  SmmGetLowerOrderFromPageCount(a2 >> 12);
  SmmInitializePushLock<1>((_QWORD *)(v2 + 1312));
  *(_QWORD *)(v3 + 1248) = v4;
  *(_QWORD *)(v3 + 1264) = v3 + 1256;
  *(_QWORD *)(v3 + 1256) = v3 + 1256;
  v5 = 0;
  *(_BYTE *)(v3 + 1324) = v6;
  do
  {
    SmmInitializeLogicalPool(v3 + 24LL * v5);
    result = *(unsigned __int8 *)(v3 + 1324);
    v5 = v10 + 1;
  }
  while ( v5 <= (unsigned int)result );
  *(_QWORD *)(v3 + 1288) = v8;
  *(_QWORD *)(v3 + 1280) = v7;
  *(_QWORD *)(v3 + 1296) = v7;
  *(_QWORD *)(v3 + 1304) = v7;
  *(_DWORD *)(v3 + 1320) = v7;
  return result;
}
