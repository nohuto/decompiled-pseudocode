/*
 * XREFs of ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x18049C55C
 * Callers:
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x18049BF8C (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsof.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSimpleTempAppVisual::RuntimeClassInitialize(
        CSimpleTempAppVisual *this,
        struct ITemporaryAppVisual *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // rax

  (*(void (__fastcall **)(struct ITemporaryAppVisual *, __int64, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    1LL,
    (char *)this + 48);
  (*(void (__fastcall **)(struct ITemporaryAppVisual *, _QWORD, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    0LL,
    (char *)this + 64);
  v4 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = 0LL;
  *((_DWORD *)this + 4) = v4;
  v6 = 7;
  if ( v4 == 7 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 56LL))(a2);
    v6 = *((_DWORD *)this + 4);
  }
  *((_QWORD *)this + 4) = v7;
  if ( v6 != 1 )
    v5 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 64LL))(a2);
  *((_QWORD *)this + 5) = v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  (*(void (__fastcall **)(struct ITemporaryAppVisual *, GUID *, char *))(*(_QWORD *)a2 + 48LL))(
    a2,
    &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
    (char *)this + 24);
  return 0LL;
}
