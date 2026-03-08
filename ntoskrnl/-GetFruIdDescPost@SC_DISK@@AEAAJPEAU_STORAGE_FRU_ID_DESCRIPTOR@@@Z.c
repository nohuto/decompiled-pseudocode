/*
 * XREFs of ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x1406730EC
 * Callers:
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140673160 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140672B68 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_DISK::GetFruIdDescPost(
        struct _UNICODE_STRING *this,
        struct _STORAGE_FRU_ID_DESCRIPTOR *a2,
        unsigned __int8 a3)
{
  char *v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx

  v5 = (char *)SC_ENV::Allocate((unsigned int)(*((_DWORD *)a2 + 2) + 1), (unsigned int)a2, a3);
  v6 = v5;
  if ( v5 )
  {
    memmove(v5, (char *)a2 + 12, *((unsigned int *)a2 + 2));
    v7 = ScAnsiToUnicodeString(v6, this + 18);
    SC_ENV::Free(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
