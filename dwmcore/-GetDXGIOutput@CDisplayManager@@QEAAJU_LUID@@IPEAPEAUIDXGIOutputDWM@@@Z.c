__int64 __fastcall CDisplayManager::GetDXGIOutput(
        CDisplayManager *this,
        struct _LUID a2,
        unsigned int a3,
        struct IDXGIOutputDWM **a4)
{
  int Adapter; // eax
  CDisplayManager *v7; // rcx
  unsigned int v8; // ebx
  int DXGIOutput; // eax
  __int64 v10; // rcx
  CDisplayManager *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = this;
  *a4 = 0LL;
  v13 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v13);
  LODWORD(v12) = Adapter;
  v8 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, &dword_1803B6E28, 2u, Adapter, 0x6Cu, 0LL);
LABEL_5:
    TranslateDXGIorD3DErrorInContext(v8, 4, &v12);
    v8 = (unsigned int)v12;
    goto LABEL_6;
  }
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(v7, v13, a3, a4);
  LODWORD(v12) = DXGIOutput;
  v8 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1803B6E28, 2u, DXGIOutput, 0x72u, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v8;
}
