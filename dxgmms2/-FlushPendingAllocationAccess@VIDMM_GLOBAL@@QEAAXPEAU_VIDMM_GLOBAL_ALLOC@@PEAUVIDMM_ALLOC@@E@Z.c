/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00E3424
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C00AB90C (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E3790 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C0018158 (VidSchIsDeviceBusy.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  DXGFASTMUTEX *v5; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r9
  _QWORD *i; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
  v7 = (_QWORD **)((char *)a2 + 272);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(v5);
    v8 = *v7;
    v9 = 0LL;
    if ( *v7 != v7 )
    {
      do
      {
        v10 = v8 - 2;
        for ( i = (_QWORD *)*(v8 - 2); i != v10; i = (_QWORD *)*i )
        {
          if ( i - 5 != (_QWORD *)a3 )
          {
            v12 = *(i - 4);
            if ( !a4 || (v13 = *(_QWORD *)(v12 + 24)) != 0 && (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 424LL) & 4) == 0 )
            {
              v9 = *(_QWORD *)(v12 + 32);
              if ( VidSchIsDeviceBusy(v9) )
                goto LABEL_13;
            }
          }
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v7 );
      v9 = 0LL;
    }
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)v5);
    if ( !v9 )
      break;
    v14[1] = 0LL;
    v14[0] = 5LL;
    VidSchFlushDevice(v9, (int *)v14, 0xFFFFFFFD, 0LL);
  }
}
