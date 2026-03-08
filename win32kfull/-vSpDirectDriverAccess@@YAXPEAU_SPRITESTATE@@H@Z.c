/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00E5E20
 * Callers:
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00E5CA8 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00E5D48 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0066060 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rbx
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = *(_QWORD *)a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( a2 )
  {
    if ( ThreadWin32Thread
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16)
      && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
    {
      v8 = *((_DWORD *)a1 + 23);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 4LL) = v8;
      v9 = *((_DWORD *)a1 + 24);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 8LL) = v9;
      v10 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 4LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) = v10;
      v11 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 8LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 24LL) = v11;
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) = 1;
    }
    else
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
        Gre::Base::Globals(v6);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 23);
      *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 48);
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( ThreadWin32Thread
         && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16)
         && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    v12 = *((_DWORD *)a1 + 25);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 12LL) = v12;
    v13 = *((_DWORD *)a1 + 26);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 16LL) = v13;
    v14 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 12LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) = v14;
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 16LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 24LL) = v15;
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) = 0;
  }
  else
  {
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
      Gre::Base::Globals(v7);
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 25);
    *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 52);
    *((_DWORD *)a1 + 22) = 0;
  }
}
