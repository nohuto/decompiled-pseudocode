__int64 __fastcall CDisplayManager::GetDXGIOutput(CDisplayManager *this, unsigned int a2, struct IDXGIOutputDWM **a3)
{
  int DXGIOutput; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CDisplayManager *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(this, a2, 0LL, a3);
  LODWORD(v7) = DXGIOutput;
  v5 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180355808, 2u, DXGIOutput, 0x51u, 0LL);
    TranslateDXGIorD3DErrorInContext(v5, 4, &v7);
    return (unsigned int)v7;
  }
  return v5;
}
