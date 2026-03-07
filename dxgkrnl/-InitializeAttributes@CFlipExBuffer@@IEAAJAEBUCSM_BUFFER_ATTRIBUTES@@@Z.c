__int64 __fastcall CFlipExBuffer::InitializeAttributes(CFlipExBuffer *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // edi
  int v6; // eax
  struct DXGGLOBAL *v8; // rax
  struct DXGGLOBAL *v9; // rax

  Global = DXGGLOBAL::GetGlobal();
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 38069) + 32LL))((char *)this + 280);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 158) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_OWORD *)this + 10) = *((_OWORD *)a2 + 7);
    *((_OWORD *)this + 11) = *((_OWORD *)a2 + 8);
    v6 = *((_DWORD *)a2 + 34);
    if ( (v6 & 0x40) != 0
      && (v6 & 0x10) != 0
      && ((v8 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v8 + 38069) + 392LL))())
       || (v9 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v9 + 38069) + 480LL))())
       || (*((_DWORD *)a2 + 34) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 46) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 46) &= ~0x40u;
    }
  }
  return (unsigned int)v5;
}
