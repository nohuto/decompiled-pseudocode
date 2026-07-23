/*
 * XREFs of PopVideoPowerSettingCallback @ 0x1403A8FC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAdaptivePowerSettingCallback @ 0x140792510 (PopAdaptivePowerSettingCallback.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopVideoPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // r10
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _OWORD v25[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v26[4]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-38h]
  __int128 v28; // [rsp+F0h] [rbp-28h]
  __int64 v29; // [rsp+100h] [rbp-18h]

  v7 = -1073741811;
  v8 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v8 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock(a1, a2);
    v9 = *((_OWORD *)PopPolicy + 1);
    v25[0] = *(_OWORD *)PopPolicy;
    v10 = *((_OWORD *)PopPolicy + 2);
    v25[1] = v9;
    v11 = *((_OWORD *)PopPolicy + 3);
    v25[2] = v10;
    v12 = *((_OWORD *)PopPolicy + 4);
    v25[3] = v11;
    v13 = *((_OWORD *)PopPolicy + 5);
    v25[4] = v12;
    v14 = *((_OWORD *)PopPolicy + 6);
    v25[5] = v13;
    v25[6] = v14;
    v15 = v26;
    v25[7] = *((_OWORD *)PopPolicy + 7);
    v16 = *((_OWORD *)PopPolicy + 9);
    v26[0] = *((_OWORD *)PopPolicy + 8);
    v17 = *((_OWORD *)PopPolicy + 10);
    v26[1] = v16;
    v18 = *((_OWORD *)PopPolicy + 11);
    v26[2] = v17;
    v19 = *((_OWORD *)PopPolicy + 12);
    v26[3] = v18;
    v20 = *((_OWORD *)PopPolicy + 13);
    v21 = *((_QWORD *)PopPolicy + 28);
    v27 = v19;
    v28 = v20;
    v29 = v21;
    LOBYTE(v15) = 1;
    LODWORD(v27) = *a2;
    v7 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _OWORD *, __int64))PopApplyPolicy)(v15, 0LL, v25, 232LL);
    PopReleasePolicyLock(v23, v22);
    PopAdaptivePowerSettingCallback(a1, a2, 4LL, a4);
  }
  return v7;
}
