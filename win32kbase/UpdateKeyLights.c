/*
 * XREFs of UpdateKeyLights @ 0x1C0031B40
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00C7730 (xxxChangeForegroundKeyboardTable.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00D2550 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateKeyLights(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax

  v4 = a1;
  *(_WORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12598) = 0;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v6, v5, v7, v8) + 13997) & 2) != 0 )
  {
    v47 = SGDGetUserSessionState(v10, v9, v11, v12);
    *(_WORD *)(v47 + 12598) |= 4u;
    v52 = SGDGetUserSessionState(v49, v48, v50, v51);
    *(_BYTE *)(v52 + 14061) |= 2u;
  }
  else
  {
    v13 = SGDGetUserSessionState(v10, v9, v11, v12);
    *(_BYTE *)(v13 + 14061) &= ~2u;
  }
  if ( (*(_BYTE *)(SGDGetUserSessionState(v15, v14, v16, v17) + 14028) & 2) != 0 )
  {
    v53 = SGDGetUserSessionState(v19, v18, v20, v21);
    *(_WORD *)(v53 + 12598) |= 2u;
    v58 = SGDGetUserSessionState(v55, v54, v56, v57);
    *(_BYTE *)(v58 + 14092) |= 2u;
  }
  else
  {
    v22 = SGDGetUserSessionState(v19, v18, v20, v21);
    *(_BYTE *)(v22 + 14092) &= ~2u;
  }
  if ( (*(_BYTE *)(SGDGetUserSessionState(v24, v23, v25, v26) + 14028) & 8) != 0 )
  {
    v59 = SGDGetUserSessionState(v28, v27, v29, v30);
    *(_WORD *)(v59 + 12598) |= 1u;
    v64 = SGDGetUserSessionState(v61, v60, v62, v63);
    *(_BYTE *)(v64 + 14092) |= 8u;
  }
  else
  {
    v31 = SGDGetUserSessionState(v28, v27, v29, v30);
    *(_BYTE *)(v31 + 14092) &= ~8u;
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v33, v32, v34, v35) + 12568) == 7
    || qword_1C02D7438 && (unsigned int)qword_1C02D7438(v37) && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (*(_BYTE *)(SGDGetUserSessionState(v37, v36, v38, v39) + 13997) & 8) != 0 )
    {
      v69 = SGDGetUserSessionState(v66, v65, v67, v68);
      *(_WORD *)(v69 + 12598) |= 8u;
      v74 = SGDGetUserSessionState(v71, v70, v72, v73);
      *(_BYTE *)(v74 + 14061) |= 8u;
    }
    else
    {
      v75 = SGDGetUserSessionState(v66, v65, v67, v68);
      *(_BYTE *)(v75 + 14061) &= ~8u;
    }
  }
  if ( qword_1C02D7438 && (unsigned int)qword_1C02D7438(v37) )
  {
    v46 = SGDGetUserSessionState(v37, v36, v38, v39);
    if ( v4 )
    {
      v37 = 0x8000LL;
      *(_WORD *)(v46 + 12598) |= 0x8000u;
    }
    else
    {
      v37 = 0x7FFFLL;
      *(_WORD *)(v46 + 12598) &= ~0x8000u;
    }
  }
  v40 = SGDGetUserSessionState(v37, v36, v38, v39);
  *(_DWORD *)(v40 + 12616) |= 2u;
  v45 = SGDGetUserSessionState(v42, v41, v43, v44);
  CKeyboardSensor::UpdateKeyboardLEDs(*(CKeyboardSensor **)(v45 + 12672));
}
