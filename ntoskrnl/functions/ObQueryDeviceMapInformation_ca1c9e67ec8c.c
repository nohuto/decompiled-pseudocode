__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int v7; // r15d
  unsigned __int64 v8; // rbx
  __int64 ProcessServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  _QWORD *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v13; // di
  __int64 v14; // rdx
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  struct _KTHREAD *v33; // rax
  bool v34; // zf
  unsigned __int64 *v36; // rax
  struct _KTHREAD *v37; // rax
  __int128 v38; // [rsp+28h] [rbp-50h]
  __int128 v39; // [rsp+38h] [rbp-40h]
  __int64 v40; // [rsp+48h] [rbp-30h]
  volatile signed __int64 *v41; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v7 = 0;
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a1 && KeGetCurrentThread()->ApcState.Process != a1 )
    return 3221225485LL;
  v8 = ObpReferenceCurrentDeviceMap(0LL, &v41, a3, a4);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  v11 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 15), 0LL);
  if ( v8 )
  {
    v13 = 1;
  }
  else
  {
    v36 = &a1[1].Affinity.StaticBitmap[31];
    if ( !a1 )
      v36 = v11;
    v8 = *v36 & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = 0;
  }
  if ( v8 )
  {
    v14 = 0LL;
    if ( (v4 & 1) == 0 )
      v14 = *(_QWORD *)(v8 + 24);
    v15 = *(_DWORD *)(v8 + 256);
    LODWORD(v38) = v15;
    v16 = 1;
    v17 = 2;
    do
    {
      *((_BYTE *)&v38 + v17 + 2) = *(_BYTE *)(v17 - 2 + v8 + 260);
      if ( (v15 & v16) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 2) = *(_BYTE *)(v17 - 2 + v14 + 260);
        LODWORD(v38) = v16 & *(_DWORD *)(v14 + 256) | v38;
      }
      v18 = 2 * v16;
      *((_BYTE *)&v38 + v17 + 3) = *(_BYTE *)(v17 - 1 + v8 + 260);
      if ( (v15 & v18) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 3) = *(_BYTE *)(v17 - 1 + v14 + 260);
        LODWORD(v38) = v18 & *(_DWORD *)(v14 + 256) | v38;
      }
      v19 = 2 * v18;
      *((_BYTE *)&v38 + v17 + 4) = *(_BYTE *)(v17 + v8 + 260);
      if ( (v15 & v19) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 4) = *(_BYTE *)(v17 + v14 + 260);
        LODWORD(v38) = v19 & *(_DWORD *)(v14 + 256) | v38;
      }
      v20 = 2 * v19;
      *((_BYTE *)&v38 + v17 + 5) = *(_BYTE *)(v17 + 1 + v8 + 260);
      if ( (v15 & v20) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 5) = *(_BYTE *)(v17 + 1 + v14 + 260);
        LODWORD(v38) = v20 & *(_DWORD *)(v14 + 256) | v38;
      }
      v21 = 2 * v20;
      *((_BYTE *)&v38 + v17 + 6) = *(_BYTE *)(v17 + 2 + v8 + 260);
      if ( (v15 & v21) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 6) = *(_BYTE *)(v17 + 2 + v14 + 260);
        LODWORD(v38) = v21 & *(_DWORD *)(v14 + 256) | v38;
      }
      v22 = 2 * v21;
      *((_BYTE *)&v38 + v17 + 7) = *(_BYTE *)(v17 + 3 + v8 + 260);
      if ( (v15 & v22) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 7) = *(_BYTE *)(v17 + 3 + v14 + 260);
        LODWORD(v38) = v22 & *(_DWORD *)(v14 + 256) | v38;
      }
      v23 = 2 * v22;
      *((_BYTE *)&v38 + v17 + 8) = *(_BYTE *)(v17 + 4 + v8 + 260);
      if ( (v15 & v23) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 8) = *(_BYTE *)(v17 + 4 + v14 + 260);
        LODWORD(v38) = v23 & *(_DWORD *)(v14 + 256) | v38;
      }
      v24 = 2 * v23;
      *((_BYTE *)&v38 + v17 + 9) = *(_BYTE *)(v17 + 5 + v8 + 260);
      if ( (v15 & v24) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 9) = *(_BYTE *)(v17 + 5 + v14 + 260);
        LODWORD(v38) = v24 & *(_DWORD *)(v14 + 256) | v38;
      }
      v25 = 2 * v24;
      *((_BYTE *)&v38 + v17 + 10) = *(_BYTE *)(v17 + 6 + v8 + 260);
      if ( (v15 & v25) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 10) = *(_BYTE *)(v17 + 6 + v14 + 260);
        LODWORD(v38) = v25 & *(_DWORD *)(v14 + 256) | v38;
      }
      v26 = 2 * v25;
      *((_BYTE *)&v38 + v17 + 11) = *(_BYTE *)(v17 + 7 + v8 + 260);
      if ( (v15 & v26) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 11) = *(_BYTE *)(v17 + 7 + v14 + 260);
        LODWORD(v38) = v26 & *(_DWORD *)(v14 + 256) | v38;
      }
      v27 = 2 * v26;
      *((_BYTE *)&v38 + v17 + 12) = *(_BYTE *)(v17 + 8 + v8 + 260);
      if ( (v15 & v27) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 12) = *(_BYTE *)(v17 + 8 + v14 + 260);
        LODWORD(v38) = v27 & *(_DWORD *)(v14 + 256) | v38;
      }
      v28 = 2 * v27;
      *((_BYTE *)&v38 + v17 + 13) = *(_BYTE *)(v17 + 9 + v8 + 260);
      if ( (v15 & v28) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 13) = *(_BYTE *)(v17 + 9 + v14 + 260);
        LODWORD(v38) = v28 & *(_DWORD *)(v14 + 256) | v38;
      }
      v29 = 2 * v28;
      *((_BYTE *)&v38 + v17 + 14) = *(_BYTE *)(v17 + 10 + v8 + 260);
      if ( (v15 & v29) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 14) = *(_BYTE *)(v17 + 10 + v14 + 260);
        LODWORD(v38) = v29 & *(_DWORD *)(v14 + 256) | v38;
      }
      v30 = 2 * v29;
      *((_BYTE *)&v38 + v17 + 15) = *(_BYTE *)(v17 + 11 + v8 + 260);
      if ( (v15 & v30) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 15) = *(_BYTE *)(v17 + 11 + v14 + 260);
        LODWORD(v38) = v30 & *(_DWORD *)(v14 + 256) | v38;
      }
      v31 = 2 * v30;
      *((_BYTE *)&v38 + v17 + 16) = *(_BYTE *)(v17 + 12 + v8 + 260);
      if ( (v15 & v31) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 16) = *(_BYTE *)(v17 + 12 + v14 + 260);
        LODWORD(v38) = v31 & *(_DWORD *)(v14 + 256) | v38;
      }
      v32 = 2 * v31;
      *((_BYTE *)&v38 + v17 + 17) = *(_BYTE *)(v17 + 13 + v8 + 260);
      if ( (v15 & v32) == 0 && v14 )
      {
        *((_BYTE *)&v38 + v17 + 17) = *(_BYTE *)(v17 + 13 + v14 + 260);
        LODWORD(v38) = v32 & *(_DWORD *)(v14 + 256) | v38;
      }
      v16 = 2 * v32;
      v17 += 16;
    }
    while ( v17 - 2 < 0x20 );
    if ( _InterlockedCompareExchange64(v11 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11 + 15);
    KeAbPostRelease((ULONG_PTR)(v11 + 15));
    v33 = KeGetCurrentThread();
    v34 = v33->SpecialApcDisable++ == -1;
    if ( v34 && ($C71981A45BEB2B45F82C232A7085991E *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
    if ( v13 == 1 )
      ObpDereferenceCurrentDeviceMap((volatile signed __int64 *)v8, v41);
    *(_OWORD *)a2 = v38;
    *(_OWORD *)(a2 + 16) = v39;
    *(_DWORD *)(a2 + 32) = v40;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v11 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11 + 15);
    KeAbPostRelease((ULONG_PTR)(v11 + 15));
    v37 = KeGetCurrentThread();
    v34 = v37->SpecialApcDisable++ == -1;
    if ( v34 && ($C71981A45BEB2B45F82C232A7085991E *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery();
    return (unsigned int)-1073741807;
  }
  return v7;
}
