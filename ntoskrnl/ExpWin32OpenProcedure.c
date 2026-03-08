/*
 * XREFs of ExpWin32OpenProcedure @ 0x14077A640
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall ExpWin32OpenProcedure(int a1, __int64 a2, __int64 a3, _DWORD *a4, int *a5, int a6)
{
  unsigned int v7; // r11d
  unsigned __int64 v8; // r9
  POBJECT_TYPE *v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  _DWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  _DWORD *v15; // [rsp+30h] [rbp-10h]
  int v16; // [rsp+38h] [rbp-8h]
  int v17; // [rsp+3Ch] [rbp-4h]
  int v18; // [rsp+50h] [rbp+10h] BYREF

  v18 = *a4;
  v13[0] = a1;
  v13[1] = 0;
  v7 = -1073741823;
  v8 = *((unsigned __int8 *)a4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8);
  v14 = a3;
  v15 = a4;
  v9 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v8];
  v10 = *a5;
  v17 = a6;
  v16 = v10;
  if ( v9 == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v11 = 37LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  if ( v9 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v11 = 33LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  if ( v9 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v11 = 27LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  if ( v9 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v11 = 18LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  if ( v9 == ExDesktopObjectType )
  {
    v11 = 8LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  if ( v9 == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v11 = 16LL;
    return (unsigned int)PsInvokeWin32Callout(v11, v13, 1LL, &v18);
  }
  return v7;
}
