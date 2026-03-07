void __fastcall DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH(DXGVALIDATIONPROCESSATTACH *this)
{
  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
}
