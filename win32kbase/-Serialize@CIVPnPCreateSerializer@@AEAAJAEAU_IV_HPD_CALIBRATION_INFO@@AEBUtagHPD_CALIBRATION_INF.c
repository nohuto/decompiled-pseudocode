/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0233CC4
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(CIVPnPCreateSerializer *this, void **a2, void *const *a3, bool a4)
{
  int v8; // edx
  __int64 v9; // rax
  void *v10; // rax

  v8 = CIVSerializer::Serialize(this, a2, *a3, *((unsigned int *)a3 + 2), a4);
  if ( v8 >= 0 )
  {
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 2);
    v8 = CIVSerializer::Serialize(this, a2 + 2, a3[2], *((unsigned int *)a3 + 6), a4);
    if ( v8 >= 0 )
    {
      *((_DWORD *)a2 + 6) = *((_DWORD *)a3 + 6);
      v8 = CIVSerializer::Serialize(this, a2 + 4, a3[4], *((unsigned int *)a3 + 10), a4);
      if ( v8 >= 0 )
      {
        *((_DWORD *)a2 + 10) = *((_DWORD *)a3 + 10);
        v8 = CIVSerializer::Serialize(this, a2 + 6, a3[6], *((unsigned int *)a3 + 14), a4);
        if ( v8 >= 0 )
        {
          *((_DWORD *)a2 + 14) = *((_DWORD *)a3 + 14);
          v8 = CIVSerializer::Serialize(this, a2 + 8, a3[8], *((unsigned int *)a3 + 18), a4);
          if ( v8 >= 0 )
          {
            *((_DWORD *)a2 + 18) = *((_DWORD *)a3 + 18);
            *((_DWORD *)a2 + 19) = *((_DWORD *)a3 + 19);
            v9 = *((_QWORD *)a3 + 10);
            if ( v9 == *((_QWORD *)a3 + 2) )
            {
              v10 = a2[2];
LABEL_14:
              a2[10] = v10;
              return (unsigned int)v8;
            }
            if ( v9 == *((_QWORD *)a3 + 4) )
            {
              v10 = a2[4];
              goto LABEL_14;
            }
            if ( v9 == *((_QWORD *)a3 + 6) )
            {
              v10 = a2[6];
              goto LABEL_14;
            }
            if ( v9 == *((_QWORD *)a3 + 8) )
            {
              v10 = a2[8];
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
