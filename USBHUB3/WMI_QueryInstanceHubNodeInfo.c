/*
 * XREFs of WMI_QueryInstanceHubNodeInfo @ 0x1C008BA80
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000E3B4 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall WMI_QueryInstanceHubNodeInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  size_t v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // r13d
  unsigned int v10; // r15d
  unsigned __int16 v11; // bp
  _QWORD **v12; // r12
  _DWORD *v13; // r14
  _QWORD *i; // rax
  _QWORD *v15; // rsi
  __int64 j; // r8
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // [rsp+78h] [rbp+10h]

  v5 = a2;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C006A198);
  v9 = *(unsigned __int16 *)(v8 + 48);
  v10 = 16 * v9 + 1186;
  v20 = v10;
  if ( v10 <= (unsigned int)v5 )
  {
    memset(a3, 0, v5);
    *a3 = 1431519822;
    a3[1] = v10;
    a3[22] = 1;
    *(_OWORD *)(a3 + 23) = *(_OWORD *)(v8 + 304);
    *(_OWORD *)(a3 + 27) = *(_OWORD *)(v8 + 320);
    HUBFDO_BuildUsb20HubDescriptor(v8, a3 + 31);
    *(_DWORD *)((char *)a3 + 195) = *(_DWORD *)(v8 + 96);
    *(_DWORD *)((char *)a3 + 207) = v9;
    if ( !*(_BYTE *)(v8 + 240) )
      *((_BYTE *)a3 + 202) = 1;
    v11 = 0;
    *((_BYTE *)a3 + 201) = *(_DWORD *)(v8 + 92) != 100;
    if ( (_WORD)v9 )
    {
      v12 = (_QWORD **)(v8 + 2360);
      v13 = (_DWORD *)((char *)a3 + 223);
      do
      {
        *(v13 - 1) = v11;
        *((_WORD *)v13 - 4) = v11;
        for ( i = *v12; ; i = (_QWORD *)*i )
        {
          v15 = i - 31;
          if ( v12 == i )
            goto LABEL_11;
          if ( *((_WORD *)v15 + 100) == v11 )
            break;
        }
        if ( i == (_QWORD *)248 )
        {
LABEL_11:
          *v13 = 0;
          goto LABEL_12;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
          WdfDriverGlobals,
          *(_QWORD *)(v8 + 16));
        for ( j = 0LL; ; j = v19 )
        {
          v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v8 + 16),
                  j,
                  1LL);
          v19 = v18;
          if ( !v18
            || v18 != *(_QWORD *)(v8 + 2656)
            && *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v18,
                            off_1C006A0F8)
                        + 48) == v11 )
          {
            break;
          }
        }
        *v13 = *((_DWORD *)v15 + 356);
        if ( v19 )
          *((_WORD *)v13 - 3) = *(_WORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                                         WdfDriverGlobals,
                                                         v19,
                                                         off_1C006A0F8)
                                                     + 24)
                                         + 1648LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v8 + 16));
LABEL_12:
        ++v11;
        v13 += 4;
      }
      while ( v11 < (unsigned __int16)v9 );
      v10 = v20;
    }
  }
  else
  {
    v6 = -1073741789;
  }
  *a4 = v10;
  return v6;
}
