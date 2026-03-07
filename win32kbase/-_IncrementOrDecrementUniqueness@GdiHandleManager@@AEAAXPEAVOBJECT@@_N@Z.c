void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(
        GdiHandleEntryDirectory **this,
        struct OBJECT *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  struct _ENTRY *EntryFromObject; // r10
  char v9; // cl
  char v10; // dl
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 v16; // r9
  __int64 v17; // rdx

  v3 = *(_QWORD *)a2;
  v7 = (unsigned int)GdiHandleManager::DecodeIndex(
                       this,
                       (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
  if ( (unsigned int)v7 >= 0x10000 || *(_DWORD *)this > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)EntryFromObject + 14));
    v17 = v3;
  }
  else
  {
    v9 = *((_BYTE *)EntryFromObject + 13);
    v10 = v9 - 1;
    v11 = v9 + 1;
    if ( !a3 )
      v11 = v10;
    *((_BYTE *)EntryFromObject + 13) = v11;
    v12 = v7 | ((unsigned __int64)*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v12;
    v13 = *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | ((unsigned int)v12 >> 8) & 0xFF0000;
    v14 = (unsigned __int16)v12;
    LOBYTE(v12) = *((_BYTE *)EntryFromObject + 14);
    *(_QWORD *)EntryFromObject = v14 | v13;
    EtwGdiHandleType = GetEtwGdiHandleType(v12);
    v17 = *(_QWORD *)a2;
  }
  EtwTraceGdiTransformHandle(v3, v17, EtwGdiHandleType, v16);
}
