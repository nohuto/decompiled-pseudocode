void __fastcall CProcessAttributionManager::Observer::~Observer(CProcessAttributionManager **this)
{
  void **v2; // rsi
  void **i; // rdi
  CProcessAttributionManager *v4; // rcx

  *this = (CProcessAttributionManager *)&CProcessAttributionManager::Observer::`vftable';
  CProcessAttributionManager::NotifyOnDeadObserver(this[1], (struct CProcessAttributionObserver *)this);
  v2 = (void **)this[3];
  for ( i = (void **)this[2]; i != v2; ++i )
    operator delete(*i);
  v4 = this[2];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (this[4] - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
  *this = (CProcessAttributionManager *)&CProcessAttributionObserver::`vftable';
}
