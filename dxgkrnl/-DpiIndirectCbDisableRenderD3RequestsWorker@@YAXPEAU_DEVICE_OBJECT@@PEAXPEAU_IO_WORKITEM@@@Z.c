/*
 * XREFs of ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C039F110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0024094 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00241A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     McTemplateK0xtq_EtwWriteTransfer @ 0x1C0065334 (McTemplateK0xtq_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C039F688 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 */

void __fastcall DpiIndirectCbDisableRenderD3RequestsWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int Miniport; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ah] [rbp-26h]
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  PVOID v17; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp-8h]
  struct _FDO_CONTEXT *v19; // [rsp+98h] [rbp+38h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C013B9B8, Executive, 0, 0, 0LL);
    v4 = (char *)qword_1C013B9F0;
    if ( qword_1C013B9F0 == &qword_1C013B9F0 )
      break;
    if ( *((void ***)qword_1C013B9F0 + 1) != &qword_1C013B9F0
      || (v5 = *(_QWORD *)qword_1C013B9F0, *(void **)(*(_QWORD *)qword_1C013B9F0 + 8LL) != qword_1C013B9F0) )
    {
      __fastfail(3u);
    }
    qword_1C013B9F0 = *(void **)qword_1C013B9F0;
    *(_QWORD *)(v5 + 8) = &qword_1C013B9F0;
    KeReleaseMutex(&stru_1C013B9B8, 0);
    v6 = *(_QWORD *)(v4 + 20);
    v17 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v19 = 0LL;
    v16[0] = 0x100000001LL;
    v16[1] = v6;
    v18 = 0;
    v15 = 0;
    Miniport = DpiIndirectGetMiniport(
                 (const struct DXGK_MINIPORT_FILTER *)v16,
                 (struct AUTO_REMOVE_LOCK *)&v17,
                 (struct AUTO_PNPPOWER_LOCK *)&v13,
                 &v19);
    v10 = Miniport;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v12) = Miniport;
      LODWORD(v11) = *((_DWORD *)v4 + 4);
      McTemplateK0xtq_EtwWriteTransfer((unsigned int)v11, v8, v9, *(_QWORD *)(v4 + 20), v11, v12);
    }
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v4 + 4) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v19 + 3) + 64LL) + 4104LL));
      else
        DpiEnableD3Requests(*((_QWORD *)v19 + 3));
    }
    operator delete(v4);
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v13);
    AUTO_REMOVE_LOCK::Release(&v17);
  }
  byte_1C013B9B0 = 0;
  KeReleaseMutex(&stru_1C013B9B8, 0);
  IoFreeWorkItem(IoWorkItem);
}
