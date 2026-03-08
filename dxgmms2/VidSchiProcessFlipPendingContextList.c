/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C001BFCC
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 *     VidSchiClearFlipDevice @ 0x1C0012708 (VidSchiClearFlipDevice.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0037980 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  unsigned int i; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx

  v3 = (_QWORD **)(a2 + 3520);
  for ( i = 0; ; i |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v6 - 5)) )
  {
    v6 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v6[1] != v3 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_13:
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    v6[1] = 0LL;
    *v6 = 0LL;
  }
  v8 = (_QWORD **)(a2 + 3536);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      return i;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_13;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_13;
    *v8 = v10;
    v10[1] = v8;
    *v9 = 0LL;
    v9[1] = 0LL;
    v11 = v9 + 19;
    if ( !*v11 )
    {
      v12 = *(_QWORD **)(a1 + 8);
      if ( *v12 != a1 )
        goto LABEL_13;
      *v11 = a1;
      v11[1] = v12;
      *v12 = v11;
      *(_QWORD *)(a1 + 8) = v11;
      *(_BYTE *)(a1 + 16) = 0;
    }
  }
}
