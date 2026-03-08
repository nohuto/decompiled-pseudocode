/*
 * XREFs of DpiGetMonitorColorimetryOverride @ 0x1C02147C4
 * Callers:
 *     ?GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z @ 0x1C0214790 (-GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02148C0 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiGetMonitorColorimetryOverride(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *ChildDescriptor; // rax
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  DXGADAPTER *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v15; // rsi
  struct _DXGKARG_QUERYADAPTERINFO v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp+10h] BYREF

  v5 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  if ( ChildDescriptor )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 48) = 0;
    v10 = ChildDescriptor[13];
    if ( v10 )
    {
      v15 = v10 + 68;
      if ( RtlCompareMemory((const void *)a3, (const void *)(v10 + 68), 0x34uLL) == 52 )
        return v5;
      v5 = 0;
      *(_OWORD *)a3 = *(_OWORD *)v15;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v15 + 32);
      v13 = *(_DWORD *)(v15 + 48);
    }
    else
    {
      if ( !*((_BYTE *)ChildDescriptor + 65) )
        return v5;
      if ( *(int *)(v9 + 3928) < 8704 )
        return v5;
      *((_DWORD *)&v16.Type + 1) = 0;
      *(&v16.InputDataSize + 1) = 0;
      *(_QWORD *)&v16.Flags.0 = 0LL;
      HIDWORD(v16.hKmdProcessHandle) = 0;
      v11 = *(DXGADAPTER **)(v9 + 3912);
      v17 = v7;
      v16.pInputData = &v17;
      v16.Type = DXGKQAITYPE_QUERYCOLORIMETRYOVERRIDES;
      v16.InputDataSize = 4;
      v16.OutputDataSize = 52;
      v16.pOutputData = (void *)a3;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v11, &v16, v8) >= 0 )
      {
        v12 = DpiFdoValidateDxgkColorimetry(a3, a2);
        v5 = v12;
        if ( v12 >= 0 && v12 != 279 )
          return v5;
      }
      v13 = 0;
      *(_OWORD *)a3 = 0LL;
      v5 = -1071841279;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
    }
    *(_DWORD *)(a3 + 48) = v13;
    return v5;
  }
  return 3221225485LL;
}
