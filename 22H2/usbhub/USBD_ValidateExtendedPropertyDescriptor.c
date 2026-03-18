/*
 * XREFs of USBD_ValidateExtendedPropertyDescriptor @ 0x1C0033194
 * Callers:
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00341A8 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedPropertyDescriptor(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r11d
  __int64 v4; // r9
  int v5; // r10d
  unsigned int *v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // ecx

  v2 = 0;
  v3 = 0;
  if ( a2 < 0xA )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *a1;
  if ( (unsigned int)v4 > a2 || (unsigned int)(v4 - 10) > 0xFF6 || *((_WORD *)a1 + 3) != 5 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 4);
  if ( (_WORD)v5 )
  {
    v6 = (unsigned int *)((char *)a1 + 10);
    v7 = (unsigned __int64)a1 + v4;
    while ( (unsigned __int64)v6 < v7 )
    {
      if ( (unsigned __int64)v6 + 14 > v7 )
        return (unsigned int)-1073741811;
      v8 = *v6;
      if ( (unsigned int)v8 > 0x7FFFFFFF )
        return (unsigned int)-1073741811;
      if ( (__int64)(v7 - (_QWORD)v6) < (int)v8 )
        return (unsigned int)-1073741811;
      if ( (unsigned int)v8 < 0xE )
        return (unsigned int)-1073741811;
      if ( v6[1] - 1 > 6 )
        return (unsigned int)-1073741811;
      v9 = *((unsigned __int16 *)v6 + 4);
      if ( (int)v9 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v6 + 4) )
        return (unsigned int)-1073741811;
      if ( (v9 & 1) != 0 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v6 + 5) )
        return (unsigned int)-1073741811;
      if ( *((_WORD *)v6 + ((unsigned __int64)*((unsigned __int16 *)v6 + 4) >> 1) + 4) )
        return (unsigned int)-1073741811;
      v10 = *(unsigned int *)((char *)v6 + v9 + 10);
      if ( ~(_DWORD)v9 < v10 )
        return (unsigned int)-1073741811;
      v11 = v10 + v9;
      if ( (unsigned int)~v11 < 0xE || v11 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( ++v3 == v5 )
        return v2;
      v6 = (unsigned int *)((char *)v6 + v8);
    }
    if ( v3 != v5 )
      return (unsigned int)-1073741811;
  }
  return v2;
}
