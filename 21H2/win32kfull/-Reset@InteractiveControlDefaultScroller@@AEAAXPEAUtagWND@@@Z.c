/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C02560BC
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255BA4 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C0256438 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  int v4; // eax
  _BYTE *v5; // rsi
  char v6; // al
  char v7; // cl
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rax

  LODWORD(InteractiveControlDefaultScroller::s_ballistics) = *((_DWORD *)InteractiveControlManager::Instance() + 55);
  v4 = *((_DWORD *)InteractiveControlManager::Instance() + 57);
  dword_1C033BDA0 = 0;
  dword_1C033BDA8 = 0;
  dword_1C033BD98 = v4;
  dword_1C033BD94 = *((_DWORD *)InteractiveControlManager::Instance() + 59);
  dword_1C033BD9C = *((_DWORD *)InteractiveControlManager::Instance() + 61);
  dword_1C033BDA4 = *((_DWORD *)InteractiveControlManager::Instance() + 63);
  dword_1C033BDAC = *((_DWORD *)InteractiveControlManager::Instance() + 65);
  v5 = *(_BYTE **)(*((_QWORD *)a2 + 2) + 424LL);
  v6 = v5[1033];
  *((_BYTE *)this + 52) = v6;
  v7 = v5[1032];
  *((_BYTE *)this + 53) = v7;
  if ( !v6 )
  {
    if ( v7 )
      *((_BYTE *)this + 52) = 2;
    else
      *((_WORD *)this + 26) = 258;
    goto LABEL_6;
  }
  if ( v6 == 2 )
  {
LABEL_6:
    v8 = *((_DWORD *)InteractiveControlManager::Instance() + 51);
    goto LABEL_8;
  }
  v8 = *((_DWORD *)InteractiveControlManager::Instance() + 53);
LABEL_8:
  if ( *((_DWORD *)this + 14) == 1 )
    v9 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
  else
    v9 = v8;
  v10 = (unsigned __int8)v5[1034];
  if ( v10 <= v9 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v10 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
    else
      v10 = v8;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v10;
  v11 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v11;
  *((_QWORD *)this + 2) = v11;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
