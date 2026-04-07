/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800199F8
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019810 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x18003EE3C (-RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x180040234 (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  struct CVisualProxy *v6; // rdx
  CVisualProxy *v7; // rcx
  int v8; // eax
  int inserted; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 84) & 4) != 0) != a2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (4 * a2) | *((_BYTE *)this + 84) & 0xFB;
    v6 = (struct CVisualProxy *)*((_QWORD *)this + 2);
    *((_BYTE *)this + 84) = v5;
    v7 = *(CVisualProxy **)(*(_QWORD *)(v4 + 40) + 16LL);
    if ( (v5 & 4) != 0 )
    {
      inserted = CVisualProxy::InsertChildAt(v7, v6, 0);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x17Du);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3E5u);
    }
    else
    {
      v8 = CVisualProxy::RemoveChild(v7, v6);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x198u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3E9u);
    }
  }
  return (unsigned int)v2;
}
