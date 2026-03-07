void __fastcall OUTPUTDUPL_MGR::ProcessDesktopSwitch(OUTPUTDUPL_MGR *this, __int64 a2)
{
  if ( (unsigned int)a2 < *((_DWORD *)this + 19) )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2, 0LL, 0LL, 0, 4);
}
