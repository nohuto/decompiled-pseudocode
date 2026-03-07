void __fastcall CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax

  if ( *((_BYTE *)this + 1040) )
  {
    v4 = *((_QWORD *)this + 129);
    *(_WORD *)v4 = *(_WORD *)(*((_QWORD *)a2 + 1) + 24LL);
    *(_WORD *)(v4 + 2) = *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v5 + 16);
    if ( *(_DWORD *)v5 == 3 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = HMValidateHandleNoSecure(v6, 19);
        if ( v7 )
          *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v7 + 24);
      }
    }
    if ( *(_DWORD *)v5 != 2 )
    {
      if ( *(_DWORD *)v5 == 1 )
        *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 129) + 48LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 156LL);
      *(_BYTE *)(*((_QWORD *)this + 129) + 32LL) = 1;
      *(_QWORD *)(*((_QWORD *)this + 129) + 40LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 129) + 48LL) |= 4u;
    v8 = (unsigned __int16)++*((_WORD *)this + 512);
    v9 = *((unsigned __int16 *)this + 512);
    *((_WORD *)this + 520) = 256;
    *((_QWORD *)this + 129) = (char *)this + 64 * v9;
    if ( v8 > 0x10 )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(this);
  }
}
