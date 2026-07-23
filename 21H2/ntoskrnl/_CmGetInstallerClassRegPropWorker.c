/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x14073FACC
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x14036F838 (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x14036F8B0 (_CmClassPropertyRead.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140636780 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14063A2D4 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  const WCHAR *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int ValueIndirect; // eax
  HANDLE v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-38h]
  HANDLE v21; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0;
  Handle = 0LL;
  v21 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_18;
  }
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = CmOpenInstallerClassRegKey(v16, v12, v14, v15, 33554433, 0, (__int64)&v21, 0LL);
    if ( v8 < 0 )
      goto LABEL_18;
    v16 = a1;
  }
  if ( a4 == 8 || a4 == 13 || a4 <= 19 && a4 > 17 )
  {
    if ( !a3 )
      a3 = v21;
    goto LABEL_15;
  }
  v19 = v21;
  if ( a3 )
    v19 = a3;
  v8 = PnpOpenPropertiesKey(v16, (__int64)v19, 0LL, 1u, 0, v20, &Handle);
  if ( v8 >= 0 )
  {
    a3 = Handle;
LABEL_15:
    if ( !MapCmClassPropertyToRegValue(v13, a4) )
    {
      v8 = -1073741264;
      goto LABEL_18;
    }
    ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (__int64)a3);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( (int)(ValueIndirect + 0x80000000) < 0 || ValueIndirect == -1073741789 )
      {
        if ( a4 == 8 && v11 > 0x40 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v11;
          *a5 = 0;
          if ( ValueIndirect || !v11 )
            v8 = -1073741789;
        }
      }
      else
      {
        v8 = ValueIndirect;
      }
      goto LABEL_18;
    }
  }
  v8 = -1073741275;
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)v8;
}
