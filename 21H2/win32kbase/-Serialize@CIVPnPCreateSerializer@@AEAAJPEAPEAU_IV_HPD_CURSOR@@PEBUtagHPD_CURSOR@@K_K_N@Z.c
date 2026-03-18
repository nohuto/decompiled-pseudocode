/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z @ 0x1C01FDBBC
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01FD33C (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C01FD114 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HPD_CURSOR **a2,
        const struct tagHPD_CURSOR *a3,
        __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // r10
  __int64 *v12; // r11
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  char *v15; // rbx
  __int64 v16; // rcx

  v7 = (a5 + 7) & 0xFFFFFFF8;
  if ( a6 )
  {
    *((_DWORD *)this + 2) += v7;
    return 0LL;
  }
  v8 = *((unsigned int *)this + 3);
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v13 = v8 + *(_QWORD *)(v9 + 16);
    *v12 = v13;
    if ( v10 )
    {
      v14 = (_DWORD *)(v13 + 4);
      v15 = (char *)a3 - v13;
      v16 = v10;
      do
      {
        *(v14 - 1) = *(_DWORD *)((char *)v14 + (_QWORD)v15 - 4);
        *v14 = *(_DWORD *)((char *)v14 + (_QWORD)v15);
        v14[1] = *(_DWORD *)((char *)v14 + (_QWORD)v15 + 4);
        v14 += 3;
        --v16;
      }
      while ( v16 );
      v13 = *v12;
    }
    *v12 = (v13 - *(_QWORD *)(v11 + 16)) | 1;
    return 0LL;
  }
  return 3221225495LL;
}
