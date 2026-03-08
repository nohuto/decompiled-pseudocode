/*
 * XREFs of VfDifRecoverIoCallbacks @ 0x1405CC8D4
 * Callers:
 *     VfTargetRecoverIoCallbacks @ 0x1405CCDE4 (VfTargetRecoverIoCallbacks.c)
 * Callees:
 *     ViDifFindIoCallbackContext @ 0x1405CCD64 (ViDifFindIoCallbackContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VfDifRecoverIoCallbacks(__int64 a1)
{
  __int64 v1; // rbx
  __int64 IoCallbackContext; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8
  __int64 (__fastcall ***v11)(__int64, IRP *); // r9
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r11
  __int64 (__fastcall *v15)(__int64, IRP *); // r10

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 48);
    if ( v1 )
    {
      if ( *(_QWORD *)(v1 + 64) )
      {
        IoCallbackContext = ViDifFindIoCallbackContext(268435485LL, a1);
        if ( IoCallbackContext
          && (*(_DWORD *)(IoCallbackContext + 8) & 1) != 0
          && *(_QWORD *)(v3 + 96) == pXdvDriverStartIo )
        {
          *(_QWORD *)(v3 + 96) = *(_QWORD *)(v4 + 8);
          *(_QWORD *)(v4 + 8) = 0LL;
        }
        v5 = ViDifFindIoCallbackContext(268435487LL, v3);
        if ( v5 && (*(_DWORD *)(v5 + 8) & 1) != 0 && *(_QWORD *)(v6 + 104) == pXdvDriverUnload )
        {
          *(_QWORD *)(v6 + 104) = *(_QWORD *)(v7 + 16);
          *(_QWORD *)(v7 + 16) = 0LL;
        }
        v8 = ViDifFindIoCallbackContext(268435486LL, v6);
        if ( v8 && (*(_DWORD *)(v8 + 8) & 1) != 0 && *(_QWORD *)(v1 + 8) != pXdvAddDevice )
        {
          *(_QWORD *)(v1 + 8) = v10[3];
          v10[3] = 0LL;
        }
        v11 = (__int64 (__fastcall ***)(__int64, IRP *))&off_140D671F0;
        v12 = v9 - (_QWORD)v10;
        v13 = v10 + 4;
        v14 = 28LL;
        do
        {
          v15 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v13 + v12 + 80);
          if ( v15 && v15 != IopInvalidDeviceRequest && (*(_DWORD *)(v11 - 1) & 1) != 0 && v15 == **v11 )
          {
            *(_QWORD *)((char *)v13 + v12 + 80) = *v13;
            *v13 = 0LL;
          }
          ++v13;
          v11 += 4;
          --v14;
        }
        while ( v14 );
        ExFreePoolWithTag(v10, 0);
        *(_QWORD *)(v1 + 64) = 0LL;
      }
    }
  }
}
