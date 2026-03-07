void __fastcall DirectComposition::CBatch::Clear(struct DirectComposition::CApplicationChannel **this)
{
  struct DirectComposition::CApplicationChannel *v2; // rbx
  __int64 v3; // rdx
  DirectComposition::CAnimationMarshaler **v4; // r14
  DirectComposition::CApplicationChannel *v5; // rbp
  unsigned __int64 v6; // r15
  DirectComposition::CBatch::CSystemResourceReference *v7; // rcx
  DirectComposition::CEvent *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rcx
  struct DirectComposition::CApplicationChannel *v11; // rbx
  DirectComposition::CAnimationMarshaler *v12; // rbx
  DirectComposition::CAnimationMarshaler **v13; // rdi
  DirectComposition::CAnimationMarshaler *v14; // rcx
  struct DirectComposition::CApplicationChannel *v15; // rbx

  if ( this[5] )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)this);
    this[5] = 0LL;
  }
  v2 = this[17];
  v3 = (__int64)this[19] + *((_QWORD *)v2 + 4) + 40;
  *((_QWORD *)v2 + 4) = v3;
  if ( !*((_BYTE *)v2 + 64) && *((_QWORD *)v2 + 5) == v3 )
  {
    v3 = *((_QWORD *)v2 + 6);
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    if ( v3 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      if ( v10 )
        MmUnmapViewOfSection(v10);
      *((_QWORD *)v2 + 6) = 0LL;
    }
  }
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)this[10];
  v5 = this[1];
  v6 = (unsigned __int64)this[9];
  this[17] = 0LL;
  this[18] = 0LL;
  *((_DWORD *)this + 12) = 0;
  this[7] = 0LL;
  this[19] = 0LL;
  if ( v4 )
  {
    do
    {
      v12 = *v4;
      v13 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v14 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v14, v6);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v5,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL)));
      v4 = v13;
    }
    while ( v13 );
  }
  v7 = this[11];
  this[10] = 0LL;
  if ( v7 )
  {
    do
    {
      v11 = *(struct DirectComposition::CApplicationChannel **)v7;
      DirectComposition::CBatch::CSystemResourceReference::Delete(v7, this[1]);
      this[11] = v11;
      v7 = v11;
    }
    while ( v11 );
  }
  v8 = this[13];
  if ( v8 )
  {
    do
    {
      v15 = *(struct DirectComposition::CApplicationChannel **)v8;
      DirectComposition::CEvent::`scalar deleting destructor'(v8, v3);
      this[13] = v15;
      v8 = v15;
    }
    while ( v15 );
  }
  v9 = *((_DWORD *)this + 28);
  if ( v9 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)this[1] + 5), v9);
    *((_DWORD *)this + 28) = 0;
  }
}
