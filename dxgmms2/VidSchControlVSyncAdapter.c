/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C00AD380
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003EA40 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncDevice @ 0x1C00AD1E0 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00147E4 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C001482C (-IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014AA8 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014AC4 (-DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     VidSchiControlVSync @ 0x1C00A5D30 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v9; // r15d
  __int64 v10; // rax
  enum _DXGK_INTERRUPT_TYPE v11; // edx
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // r8d
  struct _VIDSCH_GLOBAL *v16; // rdx
  int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // rcx

  v4 = 0;
  v5 = a4;
  v9 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_16;
  }
  v10 = *((unsigned int *)a1 + 10);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= (unsigned int)v10 )
  {
    WdLogSingleEntry2(1LL, a4, v10);
LABEL_16:
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    return 0LL;
  }
  if ( !*((_BYTE *)a1 + 2212) )
    v5 = 4294967293LL;
LABEL_3:
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
  if ( a3 )
  {
    v12 = (unsigned int *)((char *)a1 + 1824);
  }
  else
  {
    DerementRequestVSyncReasonAdapter(a2, (__int64)a1, v5);
    v12 = (unsigned int *)((char *)a1 + 1824);
    DecrementRequestVSyncCount((unsigned int *)a1 + 456, v16, v17);
  }
  if ( !*((_BYTE *)a1 + 2212) )
  {
    if ( *v12 )
      goto LABEL_7;
    v18 = -3;
LABEL_13:
    LOBYTE(v11) = a3;
    v9 = VidSchiControlVSync((__int64)a1, v11, a3 != 0 ? 0x10000 : 0, v18);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 == -3 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      do
      {
        if ( !*((_DWORD *)a1 + v4 + 456) )
        {
          LOBYTE(v11) = a3;
          v9 = VidSchiControlVSync((__int64)a1, v11, a3 != 0 ? 0x10000 : 0, v4);
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 10) );
      v12 = (unsigned int *)((char *)a1 + 1824);
    }
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + v5 + 456) )
  {
    v18 = v5;
    goto LABEL_13;
  }
LABEL_7:
  if ( a3 )
  {
    if ( v9 >= 0 )
    {
      IncrementRequestVSyncCount(v12, a1, v5);
      IncrementRequestVSyncReasonAdapter(a2, v13, v14);
    }
  }
  ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1088));
  return (unsigned int)v9;
}
