__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HID_DEVICE_INFO *a2,
        const struct tagHID_POINTER_DEVICE_INFO **a3,
        bool a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r11
  const struct tagHID_POINTER_DEVICE_INFO *v11; // r8

  result = CIVPnPCreateSerializer::Serialize(this, a2, (const struct _HIDP_CAPS *)((char *)*a3 + 40));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v9 + 96) = *(_DWORD *)(v10 + 104);
    *(_DWORD *)(v9 + 100) = *(_BYTE *)(v10 + 108) != 0;
    *(_BYTE *)(v9 + 104) = *(_BYTE *)(v10 + 109);
    *(_WORD *)(v9 + 108) = *(_WORD *)(v10 + 110);
    *(_WORD *)(v9 + 112) = *(_WORD *)(v10 + 112);
    *(_WORD *)(v9 + 116) = *(_WORD *)(v10 + 114);
    result = CIVSerializer::Serialize(
               this,
               (void **)(v9 + 120),
               *(void *const *)(v10 + 16),
               *(unsigned int *)(v10 + 104),
               a4);
    if ( (int)result >= 0 )
    {
      v11 = a3[2];
      if ( v11 )
        return CIVPnPCreateSerializer::Serialize(this, (struct _IV_HID_DEVICE_INFO *)((char *)a2 + 128), v11, a4);
    }
  }
  return result;
}
