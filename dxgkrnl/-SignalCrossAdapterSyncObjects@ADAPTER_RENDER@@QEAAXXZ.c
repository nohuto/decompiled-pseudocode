/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BD0B8
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030E948 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007010 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  __int64 v4; // rax
  int v5; // [rsp+40h] [rbp-28h]
  _BYTE v6[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v6, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v6);
    for ( i = (__int64 *)*((_QWORD *)this + 30); i != (__int64 *)((char *)this + 240) && i; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 26) )
      {
        v4 = i[4];
        v7 = -1LL;
        v8 = v4;
        LOBYTE(v5) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v8,
          0,
          &v7,
          v5);
      }
    }
    if ( v6[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v6);
  }
}
