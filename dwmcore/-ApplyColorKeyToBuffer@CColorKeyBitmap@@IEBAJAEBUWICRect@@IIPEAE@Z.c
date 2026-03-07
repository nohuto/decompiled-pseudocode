__int64 __fastcall CColorKeyBitmap::ApplyColorKeyToBuffer(
        CColorKeyBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  int *v14; // r10
  int *v15; // rdx
  int v17; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v9 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL)
                                                 + *((_QWORD *)this + 4)
                                                 + 8LL);
  v10 = (_DWORD *)(**v9)(v9, v18);
  switch ( *v10 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, v12, (__int64)a5, (float *)this + 25, (float *)this + 33);
      break;
    case 0xA:
      ApplyRangeColorKey<GpCCRf16>((__int64)a2, a3, v12, (__int64)a5, (__int64)this + 92, (__int64)this + 124);
      break;
    case 0x1C:
      v13 = *((_BYTE *)this + 80) == 0;
      v17 = -16777216;
      v15 = &v17;
      if ( !v13 )
        v15 = 0LL;
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        v12,
        (__int64)a5,
        (unsigned __int8 *)this + 88,
        (unsigned __int8 *)this + 120,
        (__int64)v15);
      break;
    default:
      if ( (unsigned int)(*v10 - 87) < 2 )
      {
        v13 = *((_BYTE *)this + 80) == 0;
        v17 = -16777216;
        v14 = &v17;
        if ( !v13 )
          v14 = 0LL;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          (__int64)this + 84,
          (__int64)a5,
          (unsigned __int8 *)this + 84,
          (unsigned __int8 *)this + 116,
          (__int64)v14);
      }
      else
      {
        v8 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003292288, 0x19Bu, 0LL);
      }
      break;
  }
  return v8;
}
