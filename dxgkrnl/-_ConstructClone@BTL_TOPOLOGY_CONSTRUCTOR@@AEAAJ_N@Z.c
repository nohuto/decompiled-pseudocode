__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(BTL_TOPOLOGY_CONSTRUCTOR *this, char a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rax

  result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 60) )
    {
      *((_BYTE *)this + 10) = 1;
      result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, a2);
      v5 = result;
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v6 = *((_DWORD *)this + 5);
      *((_BYTE *)this + 10) = 0;
      v7 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
             (CCD_TOPOLOGY **)this,
             a2,
             (const struct _LUID *)((char *)this + 12),
             v6);
      v5 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v7,
          *((int *)this + 4),
          *((unsigned int *)this + 3),
          *((unsigned int *)this + 5),
          *(_QWORD *)(*(_QWORD *)this + 64LL));
        return v5;
      }
      if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 7)) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v8 )
        {
          if ( *(_WORD *)(v8 + 20) >= 2u )
            v5 = CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
        }
      }
    }
    *((_BYTE *)this + 11) = 1;
    return v5;
  }
  return result;
}
