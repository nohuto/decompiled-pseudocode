/*
 * XREFs of StorpCSEntryTelemetry @ 0x1C0051B40
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C0032880 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgKeywordOn @ 0x1C000E4FC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B02C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

void __fastcall StorpCSEntryTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *i; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r10d
  int v19; // r11d
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  char v22; // [rsp+32h] [rbp-CEh] BYREF
  char v23; // [rsp+33h] [rbp-CDh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  char *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  int *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+140h] [rbp+40h] BYREF
  __int64 v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  int *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  __int64 *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a1 + 5352) = 0LL;
    v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 5344)) * (unsigned __int128)0x346DC5D63886594BuLL;
    v5 = *(_QWORD *)(a1 + 5088);
    *(_QWORD *)(a1 + 5344) = v2;
    v6 = *((_QWORD *)&v4 + 1) >> 11;
    *(_QWORD *)(a1 + 5360) = 0LL;
    *(_QWORD *)(a1 + 5368) = 0LL;
    *(_QWORD *)(a1 + 5376) = 0LL;
    *(_QWORD *)(a1 + 5384) = 0LL;
    *(_QWORD *)(a1 + 5392) = 0LL;
    *(_QWORD *)(a1 + 5400) = 0LL;
    *(_QWORD *)(a1 + 5408) = 0LL;
    *(_QWORD *)(a1 + 5416) = 0LL;
    *(_QWORD *)(a1 + 5424) = 0LL;
    *(_QWORD *)(a1 + 5432) = 0LL;
    *(_DWORD *)(a1 + 5440) = 0;
    *(_QWORD *)(a1 + 5448) = 0LL;
    *(_QWORD *)(a1 + 5456) = 0LL;
    *(_QWORD *)(a1 + 5464) = 0LL;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 20) & 2) != 0 )
      {
        v8 = 0LL;
        if ( *(_DWORD *)(v5 + 16) )
          v8 = v2;
        *(_QWORD *)(a1 + 5392) = v8;
      }
      else
      {
        v7 = (*(_BYTE *)(a1 + 110) & 0x20) == 0;
        *(_QWORD *)(a1 + 5368) = v2;
        *(_QWORD *)(a1 + 5376) = v2;
        if ( !v7 )
        {
          *(_QWORD *)(a1 + 5448) = v2;
          *(_QWORD *)(a1 + 5456) = v2;
        }
      }
      if ( (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
      {
        v57 = 16LL;
        v56 = a1 + 5192;
        v24 = *(_DWORD *)(a1 + 56);
        v58 = &v24;
        v60 = &v29;
        v59 = 4LL;
        v29 = v6;
        v61 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_1C00606ED, v10, v11, 5u, &v55);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    for ( i = *(__int64 **)(a1 + 136); i != (__int64 *)(a1 + 136); i = (__int64 *)*i )
    {
      i[243] = 0LL;
      i[244] = 0LL;
      i[245] = 0LL;
      i[246] = 0LL;
      i[247] = 0LL;
      i[248] = 0LL;
      i[249] = 0LL;
      i[250] = 0LL;
      i[251] = 0LL;
      *((_DWORD *)i + 504) = 0;
      i[253] = 0LL;
      i[254] = 0LL;
      i[255] = 0LL;
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 7)) )
      {
        v13 = i[211];
        v14 = *(unsigned int *)(v13 + 32);
        if ( (v14 & 8) != 0 )
        {
          if ( *(_DWORD *)(v13 + 16) )
            i[244] = v2;
        }
        else
        {
          v7 = (*((_BYTE *)i + 395) & 2) == 0;
          i[243] = v2;
          i[246] = v2;
          if ( !v7 )
          {
            i[253] = v2;
            i[254] = v2;
          }
        }
        if ( (unsigned int)dword_1C0069058 > 5 )
        {
          if ( tlgKeywordOn(v14, 0x400000000000LL) )
          {
            v34 = 16LL;
            v33 = a1 + 5192;
            v36 = 16LL;
            v35 = i + 240;
            v25 = *(_DWORD *)(a1 + 56);
            v37 = &v25;
            v20 = *((_BYTE *)i + 40);
            v39 = &v20;
            v21 = *((_BYTE *)i + 41);
            v41 = &v21;
            v22 = *((_BYTE *)i + 42);
            v43 = &v22;
            v45 = &v26;
            v47 = &v27;
            v49 = &v23;
            v51 = &v30;
            v28 = *((_DWORD *)i + 502);
            v53 = &v28;
            v38 = 4LL;
            v40 = 1LL;
            v42 = 1LL;
            v44 = 1LL;
            v26 = v18;
            v46 = 4LL;
            v27 = v19;
            v48 = 4LL;
            v23 = v17;
            v50 = 1LL;
            v30 = v6;
            v52 = 8LL;
            v54 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_1C005FD0F, v16, v17, 0xDu, &v32);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[210]);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
