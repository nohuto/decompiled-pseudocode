void __fastcall CVisual::DirtyForInvisibleChild(CComposition **this, struct CVisual *a2)
{
  struct CManipulationManager *v2; // rdi
  unsigned int v4; // ebp
  CComposition *v5; // rbx
  _DWORD *v6; // r8
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int i; // eax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  CComposition *v13; // rbx
  struct CManipulationManager *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 17;
  if ( ((_BYTE)this[12] & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 27) || IsPure2DRect((__int64)a2 + 148) )
      CVisual::AddAdditionalDirtyRect((CVisual *)this);
    else
      v4 = 21;
  }
  if ( (*((_BYTE *)v2 + 101) & 0x40) != 0 )
  {
    v14 = 0LL;
    v13 = this[2];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( (int)CComposition::GetManipulationManager(v13, &v14) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v14, 3LL, v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  }
  v5 = this[2];
  v14 = v2;
  if ( !*((_BYTE *)v5 + 1278) )
  {
    v6 = (_DWORD *)*((_QWORD *)v2 + 29);
    if ( (*v6 & 0x800000) != 0 )
    {
      v7 = (unsigned int)v6[1];
      v8 = v6 + 2;
      for ( i = 0; i < (unsigned int)v7; ++v8 )
      {
        if ( *v8 == 9 )
          break;
        ++i;
      }
      v10 = i >= (unsigned int)v7 ? 0LL : (__int64 *)((char *)v6 + 8LL * i - (((_BYTE)v7 + 15) & 7) + v7 + 15);
      v11 = *v10;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 104);
        if ( v12 )
        {
          if ( *(_QWORD *)(v12 + 64) )
            goto LABEL_17;
        }
      }
    }
    if ( (*((_DWORD *)v2 + 24) & 0x2000) != 0 || (*((_BYTE *)v2 + 96) & 0x10) != 0 )
    {
LABEL_17:
      if ( *((_QWORD *)v5 + 167) == *((_QWORD *)v5 + 168) )
      {
        std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<CVisual * &>(
          (char *)v5 + 1328,
          *((_QWORD *)v5 + 167),
          &v14);
        v2 = v14;
      }
      else
      {
        wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
          *((_QWORD *)v5 + 167),
          v2);
        *((_QWORD *)v5 + 167) += 8LL;
      }
      *((_BYTE *)v2 + 96) |= 0x20u;
    }
  }
  CVisual::PropagateFlags(this, v4);
}
