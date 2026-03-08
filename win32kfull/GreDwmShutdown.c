/*
 * XREFs of GreDwmShutdown @ 0x1C00C3164
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 * Callees:
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C001EE54 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C001EFA4 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00271A0 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00C28A4 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

__int64 __fastcall GreDwmShutdown(Gre::Base *a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rbx
  _QWORD **v5; // r8
  _QWORD *v6; // rax
  _QWORD **v7; // r8
  _QWORD *v8; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  int v16; // [rsp+30h] [rbp+8h] BYREF
  Gre::Base *v17; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  v17 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v16);
  v3 = Gre::Base::Globals(v2);
  v4 = *((_QWORD *)v3 + 38);
  if ( v4 )
  {
    ZwSetEvent(*(HANDLE *)(v4 + 336), 0LL);
    ZwClose(*(HANDLE *)(v4 + 336));
    GreSfmDwmShutdown();
    SpRenderHint((struct PDEVOBJ *)&v17, 0x10001u, 0LL, 0LL);
    vAccNotify((struct _SURFOBJ *)((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL)), 6u, 0LL);
    GreDeleteObject(*(_QWORD *)(v4 + 184));
    v5 = (_QWORD **)(v4 + 120);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v12 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v13 = (_QWORD *)v6[1], (_QWORD *)*v13 != v6) )
LABEL_14:
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v6[1] = v6;
      *v6 = v6;
    }
    v7 = (_QWORD **)(v4 + 104);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      v14 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_14;
      v15 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v15 != v8 )
        goto LABEL_14;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v8[1] = v8;
      *v8 = v8;
    }
    *((_QWORD *)v3 + 38) = 0LL;
    Win32FreePool((void *)v4);
    v10 = Gre::Base::Globals(v9);
    ++*(_DWORD *)(*((_QWORD *)v10 + 241) + 1573020LL);
  }
  return LEAVE_GRE_DWM_CRIT(a1, v16);
}
