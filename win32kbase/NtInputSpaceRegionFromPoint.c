__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, struct tagPOINT a2, _OWORD *a3)
{
  bool InputSpace; // al
  int v7; // ebx
  _OWORD *v8; // rsi
  PERESOURCE *v10[2]; // [rsp+30h] [rbp-108h] BYREF
  PERESOURCE *v11[4]; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v12; // [rsp+60h] [rbp-D8h]
  __int128 v13; // [rsp+70h] [rbp-C8h]
  __int128 v14; // [rsp+80h] [rbp-B8h]
  __int128 v15; // [rsp+90h] [rbp-A8h]
  __int128 v16; // [rsp+A0h] [rbp-98h]
  __int128 v17; // [rsp+B0h] [rbp-88h]
  __int128 v18; // [rsp+C0h] [rbp-78h]
  __int128 v19; // [rsp+D0h] [rbp-68h]
  __int128 v20; // [rsp+E0h] [rbp-58h]
  __int128 v21; // [rsp+F0h] [rbp-48h]
  __int128 v22; // [rsp+100h] [rbp-38h]
  __int128 v23; // [rsp+110h] [rbp-28h]
  PERESOURCE v24; // [rsp+120h] [rbp-18h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v10);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v11);
  v7 = 0;
  if ( InputSpace
    && InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v11, a2, (struct CLockedInputSpaceRegion *)v10) )
  {
    v12 = *(_OWORD *)v10[0];
    v13 = *((_OWORD *)v10[0] + 1);
    v14 = *((_OWORD *)v10[0] + 2);
    v15 = *((_OWORD *)v10[0] + 3);
    v16 = *((_OWORD *)v10[0] + 4);
    v17 = *((_OWORD *)v10[0] + 5);
    v18 = *((_OWORD *)v10[0] + 6);
    v19 = *((_OWORD *)v10[0] + 7);
    v20 = *((_OWORD *)v10[0] + 8);
    v21 = *((_OWORD *)v10[0] + 9);
    v22 = *((_OWORD *)v10[0] + 10);
    v23 = *((_OWORD *)v10[0] + 11);
    v24 = v10[0][24];
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *a3 = v12;
    a3[1] = v13;
    a3[2] = v14;
    a3[3] = v15;
    a3[4] = v16;
    a3[5] = v17;
    a3[6] = v18;
    v8 = a3 + 8;
    *(v8 - 1) = v19;
    *v8 = v20;
    v8[1] = v21;
    v8[2] = v22;
    v8[3] = v23;
    *((_QWORD *)v8 + 8) = v24;
    v7 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  CLockedInputSpace::~CLockedInputSpace(v10);
  CLockedInputSpace::~CLockedInputSpace(v11);
  return v7;
}
