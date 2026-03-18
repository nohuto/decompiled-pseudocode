/*
 * XREFs of MenuRecalc @ 0x1C01585A4
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01580A8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *MenuRecalc()
{
  unsigned int v0; // edi
  __int64 *v1; // rsi
  _BYTE *v2; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v9 = 0LL;
  v0 = 0;
  v1 = (__int64 *)gpKernelHandleTable;
  v2 = (_BYTE *)(gSharedInfo[1] + 24LL);
  do
  {
    if ( *v2 == 2 )
    {
      v4 = *v1;
      v9 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v8, v4);
      v5 = 0;
      *(_DWORD *)(*(_QWORD *)v8[0] + 64LL) = 0;
      for ( *(_DWORD *)(*(_QWORD *)v8[0] + 68LL) = 0;
            v5 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 44LL);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v7) + 104LL) = -1 )
      {
        v6 = (int)v5++;
        v7 = 96 * v6;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v7) + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v7) + 88LL) = 0;
      }
    }
    ++v0;
    v2 += 32;
    v1 += 3;
  }
  while ( v0 <= giheLast );
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
}
