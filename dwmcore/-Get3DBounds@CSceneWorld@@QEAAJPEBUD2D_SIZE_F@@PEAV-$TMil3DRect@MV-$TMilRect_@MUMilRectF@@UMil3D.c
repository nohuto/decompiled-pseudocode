__int64 __fastcall CSceneWorld::Get3DBounds(_QWORD **a1, __int64 a2, __int64 a3)
{
  _BYTE v6[64]; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+80h] [rbp+7h]
  _DWORD v8[4]; // [rsp+90h] [rbp+17h] BYREF
  _DWORD v9[4]; // [rsp+A0h] [rbp+27h] BYREF
  float v10[6]; // [rsp+B0h] [rbp+37h] BYREF

  if ( ((unsigned __int8 (__fastcall *)(_QWORD **))(*a1)[24])(a1) )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _DWORD *, _DWORD *))(*a1[11] + 48LL))(a1[11], v8, v9);
    v7 = 0;
    v10[0] = *(float *)v8;
    v10[1] = *(float *)&v8[1];
    v10[4] = *(float *)&v8[2];
    v10[2] = *(float *)v9;
    v10[3] = *(float *)&v9[1];
    v10[5] = *(float *)&v9[2];
    CMILMatrix::SetScale((CMILMatrix *)v6, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v6, v10, (float *)a3);
  }
  return 0LL;
}
