__int64 VfIrqlPluginEntry()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v5)(); // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v9)(); // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v17)(); // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v20)(); // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  const char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  __int64 v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  const char *v46; // [rsp+180h] [rbp+80h]
  int v47; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  const char *v50; // [rsp+1A0h] [rbp+A0h]
  int v51; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]

  v3 = 11;
  v4 = 0LL;
  qword_140C0E1E8 = (__int64)ViIrqlPluginUnload;
  v7 = 74;
  v2 = "ExAcquireFastMutex";
  v8 = 0LL;
  v5 = ViIrqlExAcquireFastMutex_Exit;
  v11 = 241;
  v6 = "ExTryToAcquireFastMutex";
  v12 = 0LL;
  v9 = ViIrqlExTryToAcquireFastMutex_Exit;
  v10 = "KeAcquireInStackQueuedSpinLock";
  v14 = "KeEnterCriticalRegion";
  v17 = ViIrqlKeEnterCriticalRegion_Exit;
  v18 = "KeLeaveCriticalRegion";
  v20 = ViIrqlKeLeaveCriticalRegion_Entry;
  v22 = "KeReleaseQueuedSpinLock";
  v26 = "KeTryToAcquireQueuedSpinLock";
  v30 = "KeAcquireSpinLockRaiseToDpc";
  v34 = "KeReleaseSpinLock";
  v38 = "KeAcquireInStackQueuedSpinLockRaiseToSynch";
  v42 = "KeAcquireQueuedSpinLockRaiseToSynch";
  v46 = "KeTryToAcquireQueuedSpinLockRaiseToSynch";
  v50 = "KeSynchronizeExecution";
  v13 = 0LL;
  v15 = 257;
  v16 = 0LL;
  v19 = 273;
  v21 = 0LL;
  v23 = 294;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 316;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 250;
  v32 = 0LL;
  v33 = 0LL;
  v35 = 296;
  v36 = 0LL;
  v37 = 0LL;
  v39 = 244;
  v40 = 0LL;
  v41 = 0LL;
  v43 = 247;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 317;
  v48 = 0LL;
  v49 = 0LL;
  v51 = 313;
  v52 = 0LL;
  v53 = 0LL;
  v0 = DifRegisterPlugin((__int64)&v2, 0xDu, 1u, &ViIrqlPluginSetting);
  if ( v0 >= 0 )
    ViIrqlInit();
  return (unsigned int)v0;
}
