/*
 * XREFs of ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1800180F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800DABCC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DBatchExecutionContext::SetLights(
        CD3DBatchExecutionContext *this,
        struct CHwLightCollectionBuffer *a2)
{
  __int64 v4; // r14
  _OWORD *v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm1

  if ( !a2 )
  {
    v7 = (_QWORD *)((char *)this + 48);
LABEL_6:
    CD3DBatchExecutionContext::Flush(this, 2147483649LL);
    goto LABEL_7;
  }
  v4 = *((_QWORD *)this + 4);
  v5 = (_OWORD *)((char *)a2 + 20);
  if ( memcmp_0((const void *)(v4 + 432), (char *)a2 + 20, 0x104uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 128LL);
    v9 = (_OWORD *)(v4 + 432);
    *(_BYTE *)(v4 + 424) = 1;
    v10 = 2LL;
    do
    {
      *v9 = *v5;
      v9[1] = v5[1];
      v9[2] = v5[2];
      v9[3] = v5[3];
      v9[4] = v5[4];
      v9[5] = v5[5];
      v9[6] = v5[6];
      v9 += 8;
      v11 = v5[7];
      v5 += 8;
      *(v9 - 1) = v11;
      --v10;
    }
    while ( v10 );
    *(_DWORD *)v9 = *(_DWORD *)v5;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1)
                                                                                                  + 560LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
      *(_QWORD *)(v4 + 416),
      0LL,
      0LL,
      v4 + 432,
      0,
      0);
    *(_BYTE *)(v4 + 424) = 0;
  }
  v6 = *((_QWORD *)this + 4);
  if ( memcmp_0((const void *)(v6 + 720), (char *)a2 + 280, 0xF0uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 256LL);
    *(_BYTE *)(v6 + 712) = 1;
    *(_OWORD *)(v6 + 720) = *(_OWORD *)((char *)a2 + 280);
    *(_OWORD *)(v6 + 736) = *(_OWORD *)((char *)a2 + 296);
    *(_OWORD *)(v6 + 752) = *(_OWORD *)((char *)a2 + 312);
    *(_OWORD *)(v6 + 768) = *(_OWORD *)((char *)a2 + 328);
    *(_OWORD *)(v6 + 784) = *(_OWORD *)((char *)a2 + 344);
    *(_OWORD *)(v6 + 800) = *(_OWORD *)((char *)a2 + 360);
    *(_OWORD *)(v6 + 816) = *(_OWORD *)((char *)a2 + 376);
    *(_OWORD *)(v6 + 832) = *(_OWORD *)((char *)a2 + 392);
    *(_OWORD *)(v6 + 848) = *(_OWORD *)((char *)a2 + 408);
    *(_OWORD *)(v6 + 864) = *(_OWORD *)((char *)a2 + 424);
    *(_OWORD *)(v6 + 880) = *(_OWORD *)((char *)a2 + 440);
    *(_OWORD *)(v6 + 896) = *(_OWORD *)((char *)a2 + 456);
    *(_OWORD *)(v6 + 912) = *(_OWORD *)((char *)a2 + 472);
    *(_OWORD *)(v6 + 928) = *(_OWORD *)((char *)a2 + 488);
    *(_OWORD *)(v6 + 944) = *(_OWORD *)((char *)a2 + 504);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1)
                                                                                                  + 560LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
      *(_QWORD *)(v6 + 704),
      0LL,
      0LL,
      v6 + 720,
      0,
      0);
    *(_BYTE *)(v6 + 712) = 0;
  }
  v7 = (_QWORD *)((char *)this + 48);
  v8 = *((_QWORD *)this + 6);
  if ( !v8 || *((_DWORD *)a2 + 4) != *(_DWORD *)(v8 + 16) )
    goto LABEL_6;
LABEL_7:
  *v7 = a2;
}
