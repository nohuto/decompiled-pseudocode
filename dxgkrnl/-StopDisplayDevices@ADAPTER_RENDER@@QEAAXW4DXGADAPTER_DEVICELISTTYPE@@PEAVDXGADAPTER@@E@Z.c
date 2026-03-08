/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02BD3BC
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C02BBD60 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02BBEF4 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1C02E84BC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  __int64 v6; // r14
  struct DXGDEVICE **v7; // r14
  struct DXGDEVICE *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // ebp
  _BYTE v13[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v14[64]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v15[88]; // [rsp+78h] [rbp-80h] BYREF

  v4 = a4;
  v6 = 160LL;
  if ( a2 != 1 )
    v6 = 144LL;
  v7 = (struct DXGDEVICE **)(a1 + v6);
  for ( i = *v7; i != (struct DXGDEVICE *)v7 && i; i = *(struct DXGDEVICE **)i )
  {
    if ( !a3 || a3 == *((_QWORD *)i + 235) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v13, (__int64)i, 2, a4, 0);
      if ( v4 || (int)COREDEVICEACCESS::AcquireExclusive((__int64)v13, 1LL) >= 0 )
      {
        v9 = *((_QWORD *)i + 235);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 2920);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 96);
          if ( v12 )
          {
            do
            {
              if ( i == ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v10, v11) )
                ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v10, i);
              ++v11;
            }
            while ( v11 < v12 );
          }
        }
        DXGDEVICE::Reset(i, 0);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      COREACCESS::~COREACCESS((COREACCESS *)v14);
    }
  }
}
