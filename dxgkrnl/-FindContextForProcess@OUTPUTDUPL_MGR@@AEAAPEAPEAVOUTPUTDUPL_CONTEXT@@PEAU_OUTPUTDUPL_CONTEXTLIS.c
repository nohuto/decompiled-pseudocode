/*
 * XREFs of ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C022378E
 * Callers:
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326320 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326460 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C032772C (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C0327860 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C0327AA0 (-GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C032A4BC (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct OUTPUTDUPL_CONTEXT **__fastcall OUTPUTDUPL_MGR::FindContextForProcess(
        OUTPUTDUPL_MGR *this,
        struct _KTHREAD **a2,
        struct _EPROCESS *a3,
        unsigned int *a4)
{
  OUTPUTDUPL_MGR *v7; // rbp
  struct _KTHREAD *v8; // rsi
  unsigned int v9; // edi
  bool v10; // zf

  v7 = this;
  if ( a2[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1696LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContextList->Mutex.IsOwner()", 1696LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
    *a4 = -1;
  v8 = a2[6];
  v9 = 0;
  if ( !*((_DWORD *)v7 + 2) )
    return 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)v8 )
    {
      this = (OUTPUTDUPL_MGR *)PsGetCurrentProcess(this);
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL) == (_QWORD)this;
    }
    else
    {
      v10 = a3 == 0LL;
    }
    if ( v10 )
      break;
    ++v9;
    v8 = (struct _KTHREAD *)((char *)v8 + 8);
    if ( v9 >= *((_DWORD *)v7 + 2) )
      return 0LL;
  }
  if ( a4 )
    *a4 = v9;
  return (struct OUTPUTDUPL_CONTEXT **)v8;
}
