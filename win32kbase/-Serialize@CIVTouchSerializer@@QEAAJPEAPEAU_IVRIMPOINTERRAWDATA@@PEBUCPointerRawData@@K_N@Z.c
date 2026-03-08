/*
 * XREFs of ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x1C02343BC
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1C021D5F0 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x1C021D9B8 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVTouchSerializer::Serialize(
        CIVTouchSerializer *this,
        struct _IVRIMPOINTERRAWDATA **a2,
        const struct CPointerRawData *a3,
        unsigned int a4,
        bool a5)
{
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbp
  struct _IVRIMPOINTERRAWDATA *v15; // r15
  _QWORD *v16; // r12
  int v17; // eax

  v9 = 24 * a4;
  if ( a5 )
  {
    if ( a4 )
    {
      v10 = a4;
      do
      {
        v11 = *((_DWORD *)a3 + 2);
        a3 = (const struct CPointerRawData *)*((_QWORD *)a3 + 3);
        v9 += (v11 + 7) & 0xFFFFFFF8;
        --v10;
      }
      while ( v10 );
    }
    *((_DWORD *)this + 2) += (v9 + 7) & 0xFFFFFFF8;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, v9) )
  {
    v14 = 0LL;
    v15 = (struct _IVRIMPOINTERRAWDATA *)(v13 + *(_QWORD *)(v12 + 16));
    *a2 = v15;
    if ( !a4 )
    {
LABEL_13:
      *a2 = (struct _IVRIMPOINTERRAWDATA *)(((unsigned __int64)*a2 - *((_QWORD *)this + 2)) | 1);
      return 0LL;
    }
    v16 = (_QWORD *)((char *)v15 + 16);
    while ( 1 )
    {
      *((_DWORD *)v16 - 4) = *((_DWORD *)a3 + 1);
      v17 = *((_DWORD *)a3 + 2);
      *v16 = 0LL;
      *((_DWORD *)v16 - 3) = v17;
      if ( (int)CIVSerializer::Serialize(
                  this,
                  (void **)v15 + 3 * v14 + 1,
                  *((void *const *)a3 + 2),
                  *((_DWORD *)a3 + 2),
                  0) < 0 )
        break;
      if ( (_DWORD)v14 )
        *((_QWORD *)v15 + 3 * (unsigned int)(v14 - 1) + 2) = ((unsigned __int64)v15 + 24 * v14 - *((_QWORD *)this + 2)) | 1;
      a3 = (const struct CPointerRawData *)*((_QWORD *)a3 + 3);
      v14 = (unsigned int)(v14 + 1);
      v16 += 3;
      if ( (unsigned int)v14 >= a4 )
        goto LABEL_13;
    }
  }
  return 3221225495LL;
}
