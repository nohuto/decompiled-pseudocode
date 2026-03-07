__int64 __fastcall PiRestartRemovalRelations(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v7; // rbx
  _DWORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v8[1] = 0;
  v8[0] = 1;
  while ( 1 )
  {
    result = IopEnumerateRelations(a2, (unsigned int)v8, (unsigned int)&v9, (unsigned int)&v10, 0LL);
    if ( !(_BYTE)result )
      return result;
    if ( v9 )
      v7 = *(_DWORD **)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v7 = 0LL;
    if ( v9 == a3 )
    {
      if ( (*(_DWORD *)(a1 + 144) & 2) == 0 && v7[75] == 788 && (v7[99] & 0x2000) != 0 && v7[101] == 21 )
      {
        PipClearDevNodeProblem(v7);
        goto LABEL_16;
      }
    }
    else if ( (v7[99] & 0x6000) == 0 && v7[75] == 788 )
    {
LABEL_16:
      PnpRestartDeviceNode(v7);
    }
  }
}
