/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x1406BDC58
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x1406BDAE4 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x14024263C (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x1402426B4 (_CmClassPropertyRead.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14077D29C (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140789460 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int16 a8)
{
  int v8; // ebx
  int v11; // r13d
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r10
  const wchar_t *v18; // rax
  int ValueIndirect; // eax
  int v20; // edx
  HANDLE v22; // rdx
  int v23; // [rsp+20h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-10h]

  v8 = 0;
  v26 = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_25;
  }
  v11 = *a7;
  if ( !*a7 )
  {
    v12 = 0LL;
    goto LABEL_6;
  }
  v12 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = CmOpenInstallerClassRegKey(v17, v13, v15, v16, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_25;
    v17 = a1;
  }
  if ( a4 == 8 || a4 == 13 || a4 <= 19 && a4 > 17 )
  {
    if ( !a3 )
      LODWORD(a3) = (_DWORD)Handle;
LABEL_15:
    v18 = MapCmClassPropertyToRegValue(v14, a4);
    if ( !v18 )
    {
      v8 = -1073741264;
      goto LABEL_25;
    }
    LODWORD(v24) = v11;
    ValueIndirect = PnpCtxRegQueryValueIndirect(
                      a1,
                      (_DWORD)a3,
                      (_DWORD)v18,
                      (unsigned int)&v24 + 4,
                      v12,
                      (__int64)&v24,
                      0LL);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( (int)(ValueIndirect + 0x80000000) >= 0 && ValueIndirect != -1073741789 )
      {
        v8 = ValueIndirect;
        goto LABEL_25;
      }
      v20 = HIDWORD(v24);
      if ( ((unsigned int)v24 >= 2 || HIDWORD(v24) != 1)
        && (HIDWORD(v24) != 7 || (unsigned int)v24 >= 2)
        && (HIDWORD(v24) != 4 || (_DWORD)v24 == 4) )
      {
        if ( (unsigned int)v24 > 0x40 && a4 == 8 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v24;
          *a5 = v20;
          if ( ValueIndirect || !v11 )
            v8 = -1073741789;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_30;
  }
  v22 = Handle;
  LOBYTE(v23) = 0;
  if ( a3 )
    v22 = a3;
  v8 = PnpOpenPropertiesKey(v17, v22, 0LL, 1LL, v23);
  if ( v8 >= 0 )
  {
    LODWORD(a3) = (_DWORD)v26;
    goto LABEL_15;
  }
LABEL_30:
  v8 = -1073741275;
LABEL_25:
  if ( v26 )
    ZwClose(v26);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
