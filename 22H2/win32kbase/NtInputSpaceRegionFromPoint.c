/*
 * XREFs of NtInputSpaceRegionFromPoint @ 0x1C01290C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00455C8 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0070078 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1C0072004 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01B31CC (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, struct tagPOINT a2, _OWORD *a3)
{
  bool InputSpace; // al
  __int64 v7; // rdx
  int v8; // ebx
  _OWORD *v9; // rsi
  PERESOURCE *v11[2]; // [rsp+30h] [rbp-108h] BYREF
  PERESOURCE *v12[4]; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-D8h]
  __int128 v14; // [rsp+70h] [rbp-C8h]
  __int128 v15; // [rsp+80h] [rbp-B8h]
  __int128 v16; // [rsp+90h] [rbp-A8h]
  __int128 v17; // [rsp+A0h] [rbp-98h]
  __int128 v18; // [rsp+B0h] [rbp-88h]
  __int128 v19; // [rsp+C0h] [rbp-78h]
  __int128 v20; // [rsp+D0h] [rbp-68h]
  __int128 v21; // [rsp+E0h] [rbp-58h]
  __int128 v22; // [rsp+F0h] [rbp-48h]
  __int128 v23; // [rsp+100h] [rbp-38h]
  __int128 v24; // [rsp+110h] [rbp-28h]
  PERESOURCE v25; // [rsp+120h] [rbp-18h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v12);
  v8 = 0;
  if ( InputSpace
    && InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v12, a2, (struct CLockedInputSpaceRegion *)v11) )
  {
    v13 = *(_OWORD *)v11[0];
    v14 = *((_OWORD *)v11[0] + 1);
    v15 = *((_OWORD *)v11[0] + 2);
    v16 = *((_OWORD *)v11[0] + 3);
    v17 = *((_OWORD *)v11[0] + 4);
    v18 = *((_OWORD *)v11[0] + 5);
    v19 = *((_OWORD *)v11[0] + 6);
    v20 = *((_OWORD *)v11[0] + 7);
    v21 = *((_OWORD *)v11[0] + 8);
    v22 = *((_OWORD *)v11[0] + 9);
    v23 = *((_OWORD *)v11[0] + 10);
    v24 = *((_OWORD *)v11[0] + 11);
    v25 = v11[0][24];
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *a3 = v13;
    a3[1] = v14;
    a3[2] = v15;
    a3[3] = v16;
    a3[4] = v17;
    a3[5] = v18;
    a3[6] = v19;
    v9 = a3 + 8;
    *(v9 - 1) = v20;
    *v9 = v21;
    v9[1] = v22;
    v9[2] = v23;
    v9[3] = v24;
    *((_QWORD *)v9 + 8) = v25;
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  CLockedInputSpace::~CLockedInputSpace(v11);
  CLockedInputSpace::~CLockedInputSpace(v12);
  return v8;
}
