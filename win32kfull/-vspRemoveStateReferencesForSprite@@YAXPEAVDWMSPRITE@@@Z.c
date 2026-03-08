/*
 * XREFs of ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00D7BF8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00243E4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00D790C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vspRemoveStateReferencesForSprite(struct DWMSPRITE *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)a1 + 5) )
  {
    v2 = Gre::Base::Globals(a1);
    Buffer[0] = *((_QWORD *)a1 + 5);
    Buffer[1] = *(_QWORD *)a1;
    RtlDeleteElementGenericTable(*((PRTL_GENERIC_TABLE *)v2 + 38), Buffer);
  }
  v3 = (unsigned __int64)a1 + 24;
  v4 = -(__int64)a1;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
}
