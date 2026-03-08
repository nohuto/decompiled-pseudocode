/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C0188088
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0187E48 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  __int128 v4; // xmm0

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 33;
  *(_DWORD *)(a1 + 72) = 66;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_OWORD *)(a1 + 200) = *a3;
  *(_OWORD *)(a1 + 216) = a3[1];
  *(_OWORD *)(a1 + 232) = a3[2];
  *(_OWORD *)(a1 + 248) = a3[3];
  v4 = a3[4];
  *(_DWORD *)(a1 + 284) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_OWORD *)(a1 + 264) = v4;
  *(_DWORD *)(a1 + 280) = a4;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  return a1;
}
