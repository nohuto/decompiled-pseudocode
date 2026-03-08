/*
 * XREFs of ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BC504
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BC0F8 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00BC5BC (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

__int64 __fastcall bIsFileInSystemFontsDir(void *a1)
{
  unsigned int v1; // esi
  int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // r8d
  char v6; // r9
  STRING *v7; // rbx
  const STRING *v8; // rcx

  v1 = 0;
  v3 = 1;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v7 = (STRING *)_InterlockedExchange64((volatile __int64 *)(v4 + 19920), 0LL);
  if ( v7 || (v3 = 0, (v7 = (STRING *)Win32AllocPoolZInit(400LL, 1986422343LL)) != 0LL) )
  {
    if ( QueryNameStringFromHandle(a1, (struct _OBJECT_NAME_INFORMATION *)v7, v5, v6) >= 0 )
    {
      v8 = *(const STRING **)(v4 + 19912);
      if ( v8 )
      {
        if ( RtlPrefixString(v8, v7, 1u) )
          v1 = 1;
      }
    }
    if ( v3 )
      _InterlockedExchange64((volatile __int64 *)(v4 + 19920), (__int64)v7);
    else
      Win32FreePool(v7);
  }
  return v1;
}
