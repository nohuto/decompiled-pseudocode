/*
 * XREFs of ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C0014C88
 * Callers:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C000873C (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreMovePointer @ 0x1C0016B30 (GreMovePointer.c)
 * Callees:
 *     EngpMovePointer @ 0x1C01365E0 (EngpMovePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vMovePointer(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // edi
  int v6; // esi
  int v8; // eax
  __int64 v9; // rbp
  struct _SURFOBJ *v10; // rbp
  void (__fastcall *v11)(struct _SURFOBJ *); // rax
  LONG cy; // ecx
  void (__fastcall *v13)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v14)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax

  v5 = a3;
  v6 = a2;
  if ( a1[18] != (_DWORD)a2 || a1[19] != (_DWORD)a3 || (a1[10] & 0x100000) != 0 )
  {
    v8 = a1[10];
    a1[18] = a2;
    a1[19] = a3;
    if ( (v8 & 0x400) == 0 )
    {
      v9 = *((_QWORD *)a1 + 319);
      if ( v9 )
      {
        v10 = (struct _SURFOBJ *)(v9 + 24);
        if ( (v8 & 2) != 0 )
        {
          v11 = (void (__fastcall *)(struct _SURFOBJ *))*((_QWORD *)a1 + 428);
          if ( v11 )
          {
            v11(v10);
          }
          else
          {
            v14 = (void (__fastcall *)(struct _SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
            if ( v14 )
              v14(v10, a2, a3, 0LL);
          }
        }
        if ( (a1[10] & 4) != 0 )
          EngpMovePointer(v10, v6, v5, a4 & 0xF4);
        if ( (a1[456] & 0x10000) != 0 && v5 != -1 && v6 < v10->sizlBitmap.cx )
        {
          cy = v10->sizlBitmap.cy;
          if ( v5 < cy )
          {
            v13 = (void (__fastcall *)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 366);
            if ( v13 )
              v13(v10, (unsigned int)v6, (unsigned int)(v5 - cy), 0LL);
          }
        }
      }
    }
  }
}
